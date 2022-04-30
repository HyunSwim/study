%{  
    #include <stdio.h>
    #define NUMBER 256
    #define PLUS 255
    #define MINUS 254
    #define END 253
%}
/*regexp definitions */
num [0-9]+
%option noyywrap

%%
{num} {return NUMBER;}
"+" return PLUS;
"-" return MINUS;
.|\n|\0 return END;
%%

int
main(){
    int token;
    char* one;
    char* two;
    char* three;
    int i = 0;
    int j = 0;
    int k = 0;
    int a;
    int b;
    int c;
    int s;
    char ch;
    while((token=yylex())){
        switch(token){
            case NUMBER:
                if(i == 0){
                    s = yyleng;
                    one = yytext;
                    c = s;
                    i = 1;
                }
                else if(i == 2){
                    three = yytext;
                    i = 3;
                }
                else{
                    printf("Error\n");
                    return 0;
                }
                break;
            case PLUS:
                if(i!=1){
                    printf("Error\n");
                    return 0;
                }
                else{
                    two = "+";
                    i = 2;
                    break;
                }
            case MINUS:
                if(i!=1){
                    printf("Error\n");
                    return 0;
                }
                else{
                    two = "-";
                    i = 2;
                    break;
                }
            case END:
                break;
            default:
                printf("Error\n");
                return 0;
        }
        if(i==3 && j==0){
            for(int k = 0;k<c;k++)
                printf("%c", one[k]);
            j = 1;
            printf(" ");
        } 
        if(i==3){
            printf("%s %s ", three, two);
            i = 1;
        }
    }
    printf("\n");
}