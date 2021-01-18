#include<stdio.h>
int main(int argc, char const *argv[])
{
    //using For Loop
    int i;
    for(i=1;i<5;i++)  //for(initialization;condition;increment/decrement){}
    {
    printf("\nthis is C Program");
    }
    i=6;  //initialization
    while(i<5)//condition
    {
    printf("\nthis is C Program inside While Loop");
        i++;//increment/decrement
    }
    i=6;//initialization
    do
    {
       printf("\nthis is C Program inside Do While Loop");
       i++;//increment/decrement
    } while (i<5);//condition
    
    return 0;
}
