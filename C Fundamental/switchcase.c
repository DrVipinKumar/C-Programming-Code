#include<stdio.h>
int main(int argc, char const *argv[])
{
    int day;
    printf("Enter any day number to find out day name=");
    scanf("%d",&day);
    if(day!=0)
    {
    if(day%7==0)
    {
    day=7;
    }
    }
    switch(day)
    {
        case 1: printf("This is Sunday");break;
        case 2: printf("This is Monday");break;
        case 3: printf("This is Tuesday");break;
        case 4: printf("This is Wednesday");break;
        case 5: printf("This is Thursday");break;
        case 6: printf("This is Friday");break;
        case 7: printf("This is Saturday");break;
        default: printf("Your choice is wrong");break;
    }
    return 0;
}
