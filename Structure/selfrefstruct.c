#include<stdio.h>
struct Student{
     char *name;
     int age;
     struct Student *link;
};
int main(int argc, char const *argv[])
{
    struct Student s1;
    struct Student s2;
    struct Student s3;
    struct Student *start=&s1;
    s1.name="Rahul";
    s1.age=24;
    s1.link=&s2;
    s2.name="Ravi";
    s2.age=26;
    s2.link=&s3;
    s3.name="Anil";
    s3.age=16;
    s3.link=NULL;
    while(start!=NULL)
    {
        printf("\nName S1=%s",start->name);
        printf("\nAge S1=%d",start->age);
        start=start->link;
    }
    printf("\n------------END-----------");
   
    return 0;
}
