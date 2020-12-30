#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    char data;
    int num;
    char name[15];
    //printf("Enter any number");
    //scanf("%d",&num);
    //printf("Your number is=%d",num);
   // printf("\nEnter single character=");
   // data=getche();
   // printf("\nYour character is=");
   // putch(data);
    printf("Enter your name=");
    gets(name);
    printf("Your name is=");
    puts(name);
    printf("Enter your name=");
    scanf("%s",name);
    printf("Your name is=%10s",name);

   
    return 0;
}
