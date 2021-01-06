#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=2;i<3;i++)  //2 times
    {
        printf("\nTable  of =%d",i);
        for(j=1;j<11;j++)   //10 times X 2 
        {
         printf("\n%d X %d=%d",i,j,(i*j));
        }
    }
    return 0;
}
