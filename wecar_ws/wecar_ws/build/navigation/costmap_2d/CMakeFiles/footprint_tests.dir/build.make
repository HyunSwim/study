# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wecar/wecar_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wecar/wecar_ws/build

# Include any dependencies generated for this target.
include navigation/costmap_2d/CMakeFiles/footprint_tests.dir/depend.make

# Include the progress variables for this target.
include navigation/costmap_2d/CMakeFiles/footprint_tests.dir/progress.make

# Include the compile flags for this target's objects.
include navigation/costmap_2d/CMakeFiles/footprint_tests.dir/flags.make

navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o: navigation/costmap_2d/CMakeFiles/footprint_tests.dir/flags.make
navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o: /home/wecar/wecar_ws/src/navigation/costmap_2d/test/footprint_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wecar/wecar_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o"
	cd /home/wecar/wecar_ws/build/navigation/costmap_2d && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o -c /home/wecar/wecar_ws/src/navigation/costmap_2d/test/footprint_tests.cpp

navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.i"
	cd /home/wecar/wecar_ws/build/navigation/costmap_2d && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wecar/wecar_ws/src/navigation/costmap_2d/test/footprint_tests.cpp > CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.i

navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.s"
	cd /home/wecar/wecar_ws/build/navigation/costmap_2d && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wecar/wecar_ws/src/navigation/costmap_2d/test/footprint_tests.cpp -o CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.s

navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o.requires:

.PHONY : navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o.requires

navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o.provides: navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o.requires
	$(MAKE) -f navigation/costmap_2d/CMakeFiles/footprint_tests.dir/build.make navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o.provides.build
.PHONY : navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o.provides

navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o.provides.build: navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o


# Object files for target footprint_tests
footprint_tests_OBJECTS = \
"CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o"

# External object files for target footprint_tests
footprint_tests_EXTERNAL_OBJECTS =

/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: navigation/costmap_2d/CMakeFiles/footprint_tests.dir/build.make
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /home/wecar/wecar_ws/devel/lib/libcostmap_2d.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: gtest/googlemock/gtest/libgtest.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libdynamic_reconfigure_config_init_mutex.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/liblaser_geometry.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libtf.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libclass_loader.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/libPocoFoundation.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libdl.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libroslib.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/librospack.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libpython2.7.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libboost_program_options.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libtinyxml2.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/liborocos-kdl.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/liborocos-kdl.so.1.4.0
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libtf2_ros.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libactionlib.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libmessage_filters.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libtf2.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /home/wecar/wecar_ws/devel/lib/libvoxel_grid.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libroscpp.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/librosconsole.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/liblog4cxx.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libboost_regex.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/librostime.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /opt/ros/melodic/lib/libcpp_common.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libboost_system.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libboost_thread.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libboost_chrono.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libboost_date_time.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libboost_atomic.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libpthread.so
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
/home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests: navigation/costmap_2d/CMakeFiles/footprint_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wecar/wecar_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests"
	cd /home/wecar/wecar_ws/build/navigation/costmap_2d && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/footprint_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
navigation/costmap_2d/CMakeFiles/footprint_tests.dir/build: /home/wecar/wecar_ws/devel/lib/costmap_2d/footprint_tests

.PHONY : navigation/costmap_2d/CMakeFiles/footprint_tests.dir/build

navigation/costmap_2d/CMakeFiles/footprint_tests.dir/requires: navigation/costmap_2d/CMakeFiles/footprint_tests.dir/test/footprint_tests.cpp.o.requires

.PHONY : navigation/costmap_2d/CMakeFiles/footprint_tests.dir/requires

navigation/costmap_2d/CMakeFiles/footprint_tests.dir/clean:
	cd /home/wecar/wecar_ws/build/navigation/costmap_2d && $(CMAKE_COMMAND) -P CMakeFiles/footprint_tests.dir/cmake_clean.cmake
.PHONY : navigation/costmap_2d/CMakeFiles/footprint_tests.dir/clean

navigation/costmap_2d/CMakeFiles/footprint_tests.dir/depend:
	cd /home/wecar/wecar_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wecar/wecar_ws/src /home/wecar/wecar_ws/src/navigation/costmap_2d /home/wecar/wecar_ws/build /home/wecar/wecar_ws/build/navigation/costmap_2d /home/wecar/wecar_ws/build/navigation/costmap_2d/CMakeFiles/footprint_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : navigation/costmap_2d/CMakeFiles/footprint_tests.dir/depend

