#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    char data[10];
    fp=fopen("fileappend.c","r");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else
    {
        while(fgets(data,10,fp))
        {
            printf("%s",data);
        }
    }
    return 0;
}
