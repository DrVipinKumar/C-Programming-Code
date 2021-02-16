#include<stdio.h>
extern int a;   //declare only not define
extern int b;   //declare only not define
int main(int argc, char const *argv[])
{
    //a=50;
    printf("\nValue of A=%d",a);
    printf("\nValue of B=%d",b);
    return 0;
}
