#include<stdio.h>
void swapbycall(int n1, int n2);
void swapbyref(int *n1, int *n2);
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter num1=");
    scanf("%d",&num1);
    printf("Enter num2=");
    scanf("%d",&num2);
    printf("\nValue of num1 =%dand num2 =%d before calling swapbycall",num1,num2);
    swapbycall(num1,num2);  //call by value  
    printf("\nValue of num1 =%dand num2 =%d after calling swapbycall",num1,num2);
    printf("\nValue of num1 =%d and num2 =%d before calling swapbyref",num1,num2);
    swapbyref(&num1,&num2);  //call by reference  //passing pointer to function
    printf("\nValue of num1 =%d and num2 =%d after calling swapbyref",num1,num2);
    return 0;
}
void swapbycall(int n1, int n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;

}
void swapbyref(int *n1, int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
