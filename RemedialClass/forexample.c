#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=10,j=10;
    int b=++i+j++;    //increment first and assign second
    int c=j++;        //assign first and increment second
    printf("b=%d",b);
    printf("c=%d",c);
    printf("i=%d",i);
    printf("j=%d",j);
    for(i=0;i<2;i++)   //for(initialization;condition;increment/decrement){}
    {
        printf("\nHello I am in C for loop i=%d",i);
    }
    return 0;
}
