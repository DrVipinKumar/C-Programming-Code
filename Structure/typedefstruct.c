#include<stdio.h>
typedef struct
{
   char *name;
   int age;
}Student;
int main(int argc, char const *argv[])
{
    typedef int INTEGER;  //to create user defined data type.
    INTEGER number=10;
    printf("INTEGER value=%d",number);
    Student s1 ={"Rahul",23}; //normal variable    Student s1 ==struct student s1
    Student *sp=&s1;   //structure pointer
    Student studentinfo[2];  //Array of structure
    printf("\nName=%s",s1.name);
    printf("\nAge=%d",s1.age);
    printf("\nName by Pointer=%s",sp->name);
    printf("\nAge by Pointer=%d",sp->age);
    return 0;
}
