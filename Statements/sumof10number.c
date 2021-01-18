#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        printf("Enter number %d=>",i);
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("Sum of 10 number is=%d",sum);
    return 0;
}
