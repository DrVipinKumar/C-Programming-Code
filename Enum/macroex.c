#include<stdio.h>
#define PI 3.14
#define N 5
#define areacircle(r) (PI*(r*r))
#define sum(n1,n2)  n1+n2
int main(int argc, char const *argv[])
{
    int r=7;
    int data[N];
    int a=areacircle(r);
    printf("\nArea of circle is=%d",a);
    printf("\nSum of two numeber %d",sum(34,56));
    return 0;
}
