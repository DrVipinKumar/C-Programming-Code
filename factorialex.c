#include<stdio.h>
int fact(int);
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter any number to get factorial=>");
    scanf("%d",&num);
    int r=fact(num);
    printf("The factorial of number is =%d",r);
    return 0;
}
int fact(int n)
{
    if(n<1)
    {
        return 1;
    }
    return n*fact(n-1);  //4*3*2*1
}