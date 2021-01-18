#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num=10;
    int *p1=&num;
    printf("\nValue of num =%d",num);
    printf("\nAddress of num=%p",&num);
    printf("\nValue of pointer p1=%d",*p1);
    printf("\nAddress of num by pointer=%p",p1);
    printf("\nAddress of pointer =%p",&p1);

    return 0;
}
