#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    int length;
    char *data="This is data for my file, that is going to be create by using c program, this final data";
    fp=fopen("mydata.txt","a");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else
    {
       while(*data!='\0')
       {
           fputc(*data,fp);
           data++;
       }
       printf("File mydata.txt is updated");
    }
    return 0;
}
