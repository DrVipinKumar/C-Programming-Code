#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter any number to get table of that number=>");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        printf("%d  X  %d = %d\n",num,i,(num*i));
    }
    return 0;
}
