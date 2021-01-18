#include<stdio.h>
int main(int argc, char const *argv[])
{
    //int num[5];     //Array declaration
    //method 1 for initialization
    int num1[10]={[0]=10,[9]=14};
    //method 2 for initialization
    int num2[]={12,23,45,67,89,146};
    //method 3 for initialization
    int num3[10];
    num3[0]=12;
    num3[1]=23;
    num3[2]=45;
    num3[3]=67;
    num3[4]=78;
    //method 4 for initialization
    printf("Enter 5 number in an Array\n");
    //for(int j=0;j<5;j++)
    //{
    //    scanf("%d",&num3[j]);
   // }

    for(int i=0;i<10;i++)
    {
        printf(" %d",num1[i]);
    }
    
    
    return 0;
}
