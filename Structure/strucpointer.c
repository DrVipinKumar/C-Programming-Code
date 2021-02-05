#include<stdio.h>
#include<string.h>
struct student
{
   char name[10];
   int age;
};
int main(int argc, char const *argv[])
{
    struct student s1 ={"Rahul",23}; //normal variable
    struct student s2;
    strcpy(s2.name,"hello");
    s2.age=24;
    struct student *sp=&s1;   //structure pointer
    struct student studentinfo[2];  //Array of structure
    printf("\nName=%s",s1.name);
    printf("\nAge=%d",s1.age);
    printf("\nName by Pointer=%s",sp->name);
    printf("\nAge by Pointer=%d",sp->age);
    return 0;
}
