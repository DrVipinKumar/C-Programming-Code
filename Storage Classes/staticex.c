#include<stdio.h>
//extern int count;
int counter1()
{
    static int c=0;
    c++;
    return c;
}
int main(int argc, char const *argv[])
{
    //count++;
    printf("\nValue of Count=%d",counter());
    printf("\nValue of Count=%d",counter());
    printf("\nValue of Count=%d",counter1());
    printf("\nValue of Count=%d",counter1());
    return 0;
}
