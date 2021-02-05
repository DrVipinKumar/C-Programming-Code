#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct Student
    {
        char *name;
        int age;
    };
    struct Student s1={"Rahul",23};
    int sizeofs1=sizeof(struct Student);
    printf("\nSize of int=%d",sizeof(int));
    printf("\nSize of char=%d",sizeof(char));
    printf("\nSize of stucture is=%d",sizeofs1);
    union UStudent
    {
        char *name;
        double age;
    };
    union UStudent u1;
    u1.name="abc";
    u1.age=34;    
    int sizeofu1=sizeof(union UStudent);
    printf("\nSize of int=%d",sizeof(int));
    printf("\nSize of char=%d",sizeof(char));
    printf("\nSize of Union is=%d",sizeofu1);
    printf("\nAddress of name at stucture %p",&s1.name);
    printf("\nAddress of age at structure %p",&s1.age);
    printf("\nAddress of name at union %p",&u1.name);
    printf("\nAddress of age at union %p",&u1.age);
    printf("\nValue of name at stucture %s",u1.name);
    printf("\nValue of age at structure %d",u1.age);
    return 0;
}
