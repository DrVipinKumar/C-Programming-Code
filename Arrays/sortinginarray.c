#include<stdio.h>
int main(int argc, char const *argv[])
{
    int data[]={12,134,56,78,90,17,34,13,45,67};//sorting in array
    int i=0,j=0;
    int n=10;
    int temp;
    printf("\nPresent values in array are=>\n");
    for(i=0;i<10;i++)
    {
        printf(" %d",data[i]);
    }
    
    for(i=0;i<n;i++)  //bubble sort
    {
        for(j=0;j<n-i-1;j++)
        {
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    
    printf("\nSorted values in array are=>\n");
    for(i=0;i<10;i++)
    {
        printf(" %d",data[i]);
    }
   
    return 0;
}
