#include<stdio.h>
int main(int argc, char const *argv[])
{
    int A[2][2];
    int B[2][2];
    int Mul[2][2]={0,0,0,0};
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
    
    //MUltiplicatin of matrix
    for(int i=0;i<2;i++)  //rows
    {
        for(int j=0;j<2;j++) //cols
        {
            for(int x=0;x<2;x++)//rows 
            {
                Mul[i][j]+=A[i][x]*B[x][j];
            }
        }
    }



     printf("Multiplication of matix A and B (2 X 2) is=\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",Mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
