#include<stdio.h>
int main(int argc, char const *argv[])
{
int num=10;
int *p=&num;
int **dp=&p;
printf("\nAddress of pointer p=%p",*dp);  //address of poiner p 
printf("\nValue of num variable=%d",**dp); //value of num variable 
printf("\nAddress of double pointer dp=%p",&dp);  //address of dp 
printf("\n%d",*(*(dp)));
printf("\n%p",*(&dp));
printf("\n%p",&p);
printf("\n%p",&num);
    return 0;
}
