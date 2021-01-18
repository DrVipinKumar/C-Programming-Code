#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int r=1;
    printf("Enter your number to get factorial=>");
    scanf("%d",&num);
    int i=num;
    while(i>=1)
    {
       r=r*i;
       i--;
    }
    printf("Factorial of %d is =%d",num,r);
    return 0;
}
