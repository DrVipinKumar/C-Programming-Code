#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n,m,i;
    printf("enter how many characters you want to store in array");
    scanf("%d",&n);
    char *arr=(char *)malloc((n+1)*sizeof(char));
    printf("\n enter %d elements in array",n);
    for(i=0;i<n;i++)
    {
        scanf("%c",arr+i);
    }
    printf("\n the array elemnts are= ");
    for(i=0;i<n+1;i++)
    {
        printf("%c",*(arr+i));
    }
    free(arr);

    return 0;
}