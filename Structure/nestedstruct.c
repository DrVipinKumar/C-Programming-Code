#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct StudentInfo
    {
        char *name;
        int age;
        int marks;
        union phoneinfo{
        int mobile;
        int landlineno;
        }phone;
    };
    struct StudentInfo s1;
    s1.name="Rahul";
    s1.age=34;
    s1.marks=99;
    s1.phone.mobile=98989;
    printf("size of s1=%d",sizeof(s1));
    printf("Name=%s",s1.name);
    printf("Mobile=%d",s1.phone.mobile);
    return 0;
}
