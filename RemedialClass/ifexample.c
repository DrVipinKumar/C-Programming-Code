#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;  //0x3344
    int b,c;   //0x345
    printf("Enter number 1=>");
    scanf("%d",&a);
    printf("Enter number 2=>");
    scanf("%d",&b);
    printf("Enter number 3=>");
    scanf("%d",&c);
    if(a>b && a>c)    //if(condition){    } else {  }
    {
        printf("\na is greater than b and c");
    }
    else if(b>a && b>c)
    {
        printf("\nb is greater than a and c");
    }
    else
    {
        printf("\nc is greater than a and b");
    }
    
    
    return 0;
}
