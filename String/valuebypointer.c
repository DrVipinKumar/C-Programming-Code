#include<stdio.h>
int main(int argc, char const *argv[])
{
    int data[5]={12,34,45,67,8};
    int *p=data;   
    for(int i=0;i<5;i++)
    {
        printf(" %d",*p);
        p++;
    }
    return 0;
}
