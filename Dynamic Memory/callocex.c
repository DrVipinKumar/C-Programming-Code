#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int size; 
    int size2;
    printf("Enter size of block");
    scanf("%d",&size);
    int *data=(int *)calloc(size,sizeof(int));
    printf("\nDefault value of all block are");
    for(int j=0;j<size;j++)
    {
        printf("%d ",*(data+j));
    }
    printf("\nEnter %d value",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",data+i);
    }
    printf("\nValue of calloc array is=");
    for(int j=0;j<size;j++)
    {
        printf("%d ",*(data+j));
    }
    printf("\nEnter re-size for data again");
    scanf("%d",&size2);
    data =(int *)realloc(data,size2*sizeof(int));
    printf("Default value after re-size of data");
    for(int i=size;i<size2;i++)
    {
        printf("%d ",*(data+i));
    }
    printf("\nEnter %d values",(size2-size));
    for(int i=size;i<size2;i++)
    {
        scanf("%d",data+i);
    }
     printf("\nValue after re-size are=");
    for(int j=0;j<size2;j++)
    {
        printf("%d ",*(data+j));
    }
    free(data);
    return 0;
}
