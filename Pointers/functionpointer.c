#include<stdio.h>
int sum(int,int);
int mul(int,int);
int main(int argc, char const *argv[])
{
    int (*psum)(int,int);
    int num1, num2;
    psum=sum;  //addres of sum function;
    printf("Enter number 1=>");
    scanf("%d",&num1);
    printf("Enter number 2=>");
    scanf("%d",&num2);
    printf("\nSum of two number using function is=%d",sum(num1,num2));
    printf("\nSum of two number using function pointer is=%d",psum(num1,num2));
    psum=mul;  //address of mul function
    printf("\nMultiplication of two number using function is=%d",mul(num1,num2));
    printf("\nMultiplication of two number using function pointer is=%d",psum(num1,num2));
    return 0;
}
int sum(int num1, int num2)
{
    return (num1+num2);
}
int mul(int n1, int n2)
{
    return n1*n2;
}
