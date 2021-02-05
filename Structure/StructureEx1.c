#include<stdio.h>
struct student
    {
    char *name;
    int age;
    }s1,s2,allstd[2];
int main(int argc, char const *argv[])
{
   s1.name="rahul";
   s1.age=23;
   s2.name="Ravi";
   s2.age=24;
   allstd[0].name="Sanjay";
   allstd[0].age=25;
   allstd[1].name="Amit";
   allstd[1].age=26;
    printf("\nName=%s",s1.name);
    printf("\nAge=%d",s1.age);
    printf("\nName=%s",s2.name);
    printf("\nAge=%d",s2.age);
    printf("\nName=%s",allstd[0].name);
    printf("\nAge=%d",allstd[0].age);
    printf("\nName=%s",allstd[1].name);
    printf("\nAge=%d",allstd[1].age);
    return 0;
}
