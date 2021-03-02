#include<stdlib.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct student
    {
        char name[20];
        int age;
    }s1;
    FILE *fp;
    fp=fopen("studentinfo.csv","a");
    printf("Enter student name=>");
    scanf("%[^\n]",s1.name);
    printf("Enter student age=>");
    scanf("%d",&s1.age);
    printf("\nStudent Name=%s and age=%d",s1.name,s1.age);
    fprintf(fp,"%d,%s\n",s1.age,s1.name);
    rewind(fp);
    fscanf(fp,"%d,%[^\n]",s1.age,s1.name);
        printf("Name=%s,",s1.name);
        printf("Age=%d\n",s1.age);
    
    fclose(fp);
    return 0;
}
