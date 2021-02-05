#include<stdio.h>
int main(int argc, char const *argv[])
{
    int data[5]={23,45,67,23,12};
    int *p=&data[1];   //=data
    printf("\nValue of First element of Array=%d",data[1]);
    printf("\nAddress of First element of Array=%p",&data[1]);
    printf("\nValue of First element of Array=%d",*(data+1));//increment in pointer
    printf("\nAddress of First element of Array=%p",&data[0]+1);
    printf("\nusing Pointer Value of First element of Array=%d",*(p-1));//increment in pointer
    printf("\nusing Pointer Address of First element of Array=%p",&p-1);
    return 0;
}
