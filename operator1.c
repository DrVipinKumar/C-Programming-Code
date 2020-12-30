#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x=30;
    int y=20;
    int temp;
    temp=x--;     //temp=x; x=x-1;
    printf("\nValue of temp=%d",temp);
    printf("\nValue od X=%d",x);
    temp=++y;     // y=y+1;temp=y;
    printf("\nValue of temp=%d",temp);
    printf("\nValue od X=%d",y);
    (x>y)?printf("\nX is greater"):printf("\nY is greater");
    return 0;
}
