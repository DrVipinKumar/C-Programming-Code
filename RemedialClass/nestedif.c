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
    if(a>b)    //if(condition){    } else {  }
    {
        if(a>c)
        {
        printf("A is greater than B and C");
        }
    }
    if(b>c)
        {
        if(b>a)
            printf("B is greater than A and C");
        }
     if(c>a)
        {
        if(c>b)
            printf("C is greater than A and B");
        } 
    
    return 0;
}
