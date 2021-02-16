#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int num,num1;
    printf("Enter size for data");
    scanf("%d",&num);
    int *data=(int *)malloc(num*sizeof(int));
    printf("Enter 5 element in array");
    for(int i=0;i<num;i++)
    {
        scanf("%d",data+i);
    }
    printf("Value after inserting is=");
    for(int j=0;j<num;j++)
    {
        printf("%d ",*(data+j));
    }
    printf("\nEnter re-size for data again");
    scanf("%d",&num1);
    data =(int *)realloc(data,num1*sizeof(int));
    printf("\nEnter remaining values");
    for(int i=num;i<num1;i++)
    {
        scanf("%d",data+i);
    }
     printf("\nValue after re-size are=");
    for(int j=0;j<num1;j++)
    {
        printf("%d ",*(data+j));
    }
    free(data);
    return 0;
}
