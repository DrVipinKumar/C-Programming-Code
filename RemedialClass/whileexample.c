#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    //initialization before while
    i=6;
    while(i<=5)   //while(condition) {  increment/decrement}
    {
        printf("\nHello I am in C for loop i=%d",i);
        i++;
    }
    i=6;
    do
    {
        printf("\nHello I am in C for do while i=%d",i);
        i++;
    } while (i<=5);
    
    return 0;
}
