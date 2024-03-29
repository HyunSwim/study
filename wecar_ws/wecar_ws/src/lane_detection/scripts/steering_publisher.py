#! /usr/bin/env python
import cv2
import numpy as np
from sensor_msgs.msg import Image
from std_msgs.msg import Float32
import rospy
from cv_bridge import CvBridge

class LaneDetection:
    # customize these values
    # color
    low_yellow = np.array([0, 100, 30]) 
    high_yellow = np.array([100, 230, 255])
    low_white = np.array([0, 100, 0])
    high_white = np.array([255, 255, 255])
    # birdeye points
    # upper_left, upper_right, lower_left, lower_right
    # pts1 = np.float32([[175, 240], [465, 240], [0, 380], [640, 380]])
    upper_width = 150
    pts1 = np.float32([[320-upper_width, 300], [320+upper_width, 300], [0, 400], [640, 400]])
    pts2 = np.float32([[0, 0], [640, 0], [0, 480], [640, 480]])
    
    def __init__(self):
        rospy.init_node("steering_node")
        self.cvbridge = CvBridge()
        self.img_sub = rospy.Subscriber("/zed2/zed_node/rgb/image_rect_color",Image,self.convertIng)  
        self.steering_pub = rospy.Publisher("/wecar/steer", Float32, queue_size=5)
        rospy.spin()

    def convertIng(self, img):
        frame = self.cvbridge.imgmsg_to_cv2(img, "bgr8")
        frame = cv2.resize(frame, dsize=(640, 480), interpolation=cv2.INTER_AREA)
        bird_eye_image = self.bird_eye(frame)
        colored_image = self.color_detect(bird_eye_image)
        self.slidng_list_left = self.sliding_left(colored_image)
        self.sliding_list_right = self.sliding_right(colored_image)
        print("left : {}".format(self.slidng_list_left))
        print("right : {}".format(self.sliding_list_right))

        frame_steer = self.steering(frame, self.slidng_list_left, self.sliding_list_right)
        
        #visualization
        # 1.birdeye points
        arr1 = map(tuple, self.pts1)
        for i in arr1:
            cv2.circle(frame, i, 5,(255,255,0), -1)
        # 2.list points
        j = 0
        for i in self.slidng_list_left:
            cv2.circle(bird_eye_image, i, 5,(255,j*20,0), -1)
            j += 1
        j = 0
        for i in self.sliding_list_right:
            cv2.circle(bird_eye_image, i, 5,(j*20,255,0), -1)
            j += 1
        cv2.imshow("frame", frame)
        cv2.imshow("bird_eye_and_colored_image", bird_eye_image)
        # cv2.imshow("colored_image", colored_image)
        cv2.waitKey(1)

    def steering(self, frame, slidng_list_left, sliding_list_right):
        x_left = []
        x_right = []
        center_pos_x = 350
        if len(slidng_list_left) == 0:
            left_distance = 0
            left_x = 0
        else:
            left_x = slidng_list_left[-1][0]
            left_distance = center_pos_x - slidng_list_left[-1][0] #should be positive
            # print("slidng_lisjlklljkljkljkljkljkljkljljukljkljkljklkjlt_left[-1][0] : {}".format(slidng_list_left[-1][0]))
        if len(sliding_list_right) == 0:
            right_distance = 0
            right_x = 0
        else:
            right_x = sliding_list_right[-1][0]
            right_distance = center_pos_x - sliding_list_right[-1][0] #should be negative
            # print("sliding_list_right[-1][0] : {}".format(sliding_list_right[-1][0]))
        # print("left_distance : {}".format(left_distance))
        # print("right_distance : {}".format(right_distance))
        #extract x coordinates from slidng_list_left
        for i in range(0, len(slidng_list_left)): 
            x_left.append(slidng_list_left[i][0])
        
        left_diff_arr = np.diff(x_left)
        divider = len(left_diff_arr)
        if divider == 0:
            divider = 1
        left_diff_sum = np.sum(left_diff_arr)
        left_avg = int(left_diff_sum/divider)
        
        # print("left_diff_arr{}".format(left_diff_arr))
        # print("left_diff_sum{}".format(left_diff_sum))
        # print("left_avg{}".format(left_avg))

        #remove inappropriate cases 
        for i in range(0, len(left_diff_arr)): 
            if (left_diff_arr[i] > (left_avg +80)) or (left_diff_arr[i] < (left_avg - 80)): #the value 80 can be modified
                self.slidng_list_left = []
                left_diff_sum = 0

        #extract x coordinates from sliding_list_right
        for i in range(0, len(sliding_list_right)): 
            x_right.append(sliding_list_right[i][0])
        right_diff_arr = np.diff(x_right)
        divider = len(right_diff_arr)
        if divider == 0:
            divider = 1
        right_diff_sum = np.sum(right_diff_arr)
        right_avg = int(right_diff_sum/divider)

        #remove inappropriate cases
        for i in range(0, len(right_diff_arr)): 
            if (right_diff_arr[i] > (right_avg +80)) or (right_diff_arr[i] < (right_avg - 80)): #the value 80 can be modified
                self.sliding_list_right = []
                right_diff_sum = 0
        
        #publish average values divided by 100
        left_dist_th = 226
        right_dist_th = -230
        print("left_x={}".format(left_x))
        print("right_x={}".format(right_x))
        print("left_dist={}".format(left_distance))
        print("right_dist={}".format(right_distance))

        if left_distance == 0 and right_distance != 0:
            # dist_steer = right_distance - right_dist_th 
            dist_steer = 150 
        elif right_distance == 0 and left_distance != 0:
            # dist_steer = left_distance + left_dist_th
            dist_steer = -150
        elif right_distance == 0 and left_distance == 0:
            dist_steer = 0
        else:
            dist_steer = right_distance + left_distance
        avg_val = float((left_diff_sum + right_diff_sum)/2) *-1
        if avg_val > 100:
            avg_val = 100
        elif avg_val < -100:
            avg_val = -100
        avg_val /= 100
        avg_val *= 15
        print("avg_val : {}".format(avg_val * (-0.6)))
        print("dist_steer : {}".format(dist_steer))
        self.steering_pub.publish(avg_val*(-0.6) + dist_steer * 0.1)
        # self.steering_pub.publish(dist_steer * 0.1)
    
        return frame #return frame is for visualization

    def sliding_left(self, img):
        left_list = []
        '''
        row: starting from y=179 to y=460, moving by 40
        col: starting from x=19 to x=300, moving by 5
        '''
        for j in range(179, img.shape[0] - 20, 40): 
            j_list = []
            for i in range(19, int(img.shape[1]/2) - 20, 5):
                num_sum = np.sum(img[j - 19:j + 21, i - 19:i + 21]) #window size is 20*20
                if num_sum > 100000: #pick (i,j) where its num_sum is over 100000
                    j_list.append(i)
            try:
                len_list = [] 
                #cluster if a gap between elements in the list is over 5
                result = np.split(j_list, np.where(np.diff(j_list) > 5)[0] + 1) 
                for k in range(0, len(result)):
                    len_list.append(len(result[k])) #append the lengths of each cluster
                largest_integer = max(len_list)
            
                for l in range(0, len(result)):
                    if len(result[l]) == largest_integer: 
                        avg = int(np.sum(result[l]) / len(result[l])) #average
                        left_list.append((avg, j)) #avg points of left side 
            except:
                continue
        return left_list

    
    def sliding_right(self, img):
        right_list = []
        '''
        row: starting from x=179 pts1 = np.float32([[100, 240], [540, 240], [0, 380], [640, 380]]) #for driving
        pts2 = np.float32([[0, 0], [640, 0], [0, 480], [640, 480]])to y=560, moving by 40
        col: starting from x=320 to y=620, moving by 5
        '''
        for j in range(179, img.shape[0] - 20, 40): 
            j_list = []
            for i in range(int(img.shape[1]/2), img.shape[1] - 20, 5): 
                num_sum = np.sum(img[j - 19:j + 21, i - 19:i + 21]) #window size is 20*20
                if num_sum > 100000: #pick (i,j) where its num_sum is over 100000
                    j_list.append(i)
            try:
                len_list = []
                #cluster if a gap between elements in the list is over 5
                result = np.split(j_list, np.where(np.diff(j_list) > 5)[0] + 1) 
                for k in range(0, len(result)):
                    len_list.append(len(result[k])) #append the lengths of each cluster
                largest_integer = max(len_list)
            
                for l in range(0, len(result)):
                    if len(result[l]) == largest_integer: 
                        avg = int(np.sum(result[l]) / len(result[l])) #average
                        right_list.append((avg, j)) #avg points of left side 
            except:
                continue
        return right_list

    def color_detect(self, img):
        hls = cv2.cvtColor(img, cv2.COLOR_BGR2HLS)
        # mask_white = cv2.inRange(hls, self.low_white, self.high_white)
        mask_yellow = cv2.inRange(hls, self.low_yellow, self.high_yellow)
        #mask = cv2.bitwise_or(mask_white, mask_yellow)
        # return mask_white
        return mask_yellow

    def bird_eye(self, frame):
        #customize these values
        matrix = cv2.getPerspectiveTransform(self.pts1, self.pts2)
        result = cv2.warpPerspective(frame, matrix, (640, 480))
        return result

if __name__ == '__main__':
    a = LaneDetection()