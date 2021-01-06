#include<stdio.h>
int main(int argc, char const *argv[])
{
    int day;
    printf("Enter your day to get week days name=>");
    scanf("%d",&day);
    switch(day)
    {
       case 1: 
       printf("\nToday is Sunday");
       break;
       case 2:
        printf("\nToday is Monday");
        break;
       case 3: 
       printf("\nToday is Tuesday");
       break;
       case 4: 
       printf("\nToday is Wednesday");
       break;
       case 5:
       printf("\nToday is Thrusday");
       break;
       case 6:
       printf("\nToday is Friday");
       break;
       case 7:
       printf("\nToday is Saturday");
       break;
       default: 
       printf("\nYour day is wrong!");
       break;
    }
    return 0;
}
