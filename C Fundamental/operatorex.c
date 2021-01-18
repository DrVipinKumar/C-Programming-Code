#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1=10;
    int num2=20;
     int sum =num1+num2;  //num1+=num2
    int min=num2-num1;
    printf("\nSum of two number=%d",sum);
    printf("\nSubstraction of two number=%d",min);
    printf("\nNum1 is greater then Num2=");
    if(num1<num2)
    {
        printf("false");
    }
    else
    {
        
        printf("true");
    }
    if(num1!=6 && num2==20)
    {
        printf("\ncondition is && operator is true");
    }
    else
    {
        printf("\ncondition is && operator is false");
    }
   printf("%d",sizeof(num1));
    return 0;
}
