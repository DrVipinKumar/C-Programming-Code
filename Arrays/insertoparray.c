#include<stdio.h>
int main(int argc, char const *argv[])
{
    int data[]={12,34,56,78,90,17,34,13,45,67};//insertion at specific postion in array
    int value,position=-1;
    int i=0;
    printf("Enter your value to insert=>");
    scanf("%d",&value);
    printf("Enter position to insert=>");
    scanf("%d",&position);
    printf("\nPresent values in array are=>\n");
    for(i=0;i<10;i++)
    {
        printf(" %d",data[i]);
    }
    data[position-1]=value;
    printf("\nInserted values in array are=>\n");
    for(i=0;i<10;i++)
    {
        printf(" %d",data[i]);
    }
   
    return 0;
}
