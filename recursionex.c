#include<stdio.h>
int displayNum(int);  //declaration of function
int main(int argc, char const *argv[])
{
    displayNum(15);
    return 0;
}
int displayNum(int n)
{
    if(n<1)
    return 1;
    printf("\nValue of n=%d",n);
    displayNum(n-1);    //function calling itself is called recursion function. 
}
