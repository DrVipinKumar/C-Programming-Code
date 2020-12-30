#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x=20;
    int y=25;
    printf("Welcome to Conditional Statments....");//Simple statments
    if((x==10) || (y==20))  //false || true, true || false, true ||true  
    {
        printf("\nX and Y is OK");
    }
    else 
    {
        printf("\nX  and Y is not OK");
    }
    
    switch(x=50)
    {
        case 10: 
                    printf("\nX = 10");
                    break;
        case 20: 
                    printf("\nX=20");
                    break;
        case 50:
                    printf("\nX=50");
                    break;
        default:
                    printf("\nX is not valid");
                    break;
    }
    printf("\nI am outside of switch");
    return 0;
}
