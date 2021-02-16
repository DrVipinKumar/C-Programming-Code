#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int hour=0,min=0,sec=0,i;
    printf("Enter a time format HH:MM:SS \n");
    scanf("%d %d %d",&hour,&min,&sec);
    system("clear");
    for(hour;hour<24;hour++)
{    for(min;min<60;min++) 
    {
       for(sec;sec<60;sec++) 
    {
        printf("\n \n \n\t\t\t%d:%d:%d",hour,min,sec);
           start:
           if(hour<12)
           printf("AM");
           else
            printf("PM");
            for(double i=0;i<10;i++)
            i++;
            i--;
    }
           sec=0;
    }
       min=0;
 } hour=0;
goto start;
getch();
}