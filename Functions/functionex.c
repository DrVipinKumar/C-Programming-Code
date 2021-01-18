#include<stdio.h>
int sum(int,int);//declaration of functions
void subtract(int,int);    
void mul();
int  div();
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter number 1=>");
    scanf("%d",&num1);
    printf("Enter number 2=>");
    scanf("%d",&num2);
    int add=sum(num1,num2);
    printf("\nSum of two number is=%d",add);
    subtract(num1,num2);   //x=num1, y=num2
    mul();
    int divistion=div();
    printf("\nDivision of two number =%d",divistion);
    return 0;
}
void mul()  //with no arguments and no return value
{
    int num1, num2;
    printf("Enter number 1=>");
    scanf("%d",&num1);
    printf("Enter number 2=>");
    scanf("%d",&num2);
    int multiply=num1*num2;
    printf("\nMultiplication of two number is =%d",multiply);
    
}
int div()  //with no arguments and return value
{
    int num1, num2;
    printf("Enter number 1=>");
    scanf("%d",&num1);
    printf("Enter number 2=>");
    scanf("%d",&num2);
    return (num1/num2);    
}

void subtract(int x, int y)   //with arguments and no return value
{
   int sub=x-y;
   printf("\nSubtraction fo two number is =%d",sub);
}
int sum(int num1, int num2)  //defination of function with arguments and return value
{
    return (num1+num2);
}