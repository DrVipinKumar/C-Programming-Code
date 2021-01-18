#include<stdio.h>
int main(int argc, char const *argv[])
{
    int A[2][2];
    int B[2][2];
    int Sum[2][2];
    printf("Enter value in matix A (2 X 2)\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter value in matix B (2 X 2)\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("Value is matix A (2 X 2)=\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
     printf("Value is matix B (2 X 2)=\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            Sum[i][j]=A[i][j]+B[i][j];
        }
        printf("\n");
    }
     printf("Sum of matix A and B (2 X 2) is=\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
