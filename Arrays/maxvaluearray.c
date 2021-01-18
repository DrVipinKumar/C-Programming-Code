#include<stdio.h>
int main(int argc, char const *argv[])
{
    int data[]={12,34,56,78,90,17,34,453,45,67};//maximum value in array
    int max=data[0];
    for(int i=1;i<10;i++)
    {
        if(max<data[i])
        {
            max=data[i];
        }
    }
    printf("Maximum value in array is =%d",max);
    return 0;
}