#include<stdio.h>
int main(int argc, char const *argv[])
{
    int data[]={12,34,56,78,90,17,34,13,45,67};
    int value,position=-1;
    printf("Enter your value to search=>");
    scanf("%d",&value);
    for(int i=0;i<10;i++)
    {
        if(data[i]==value)
        {
            position=i+1;
        }    
        
        
    }
    if(position>-1)
        {
            printf("\nValue found at postion=%d",position);
        }    
        else
        {
            printf("\nSorry! value not found");
        }
    return 0;
}
