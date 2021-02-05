#include<stdio.h>
int userstrlen(char *);
void userstrcpy(char *,char *);
int main(int argc, char const *argv[])
{
    char data[]="This";
    char cdata[20];
    int len;
    len=userstrlen(data);
    userstrcpy(cdata,data);
    printf("Length of string is =%d",len);
    printf("\nCopy string is =%s",cdata);
    return 0;
}
void userstrcpy(char *cstr,char *str)
{
    while(*str!='\0')
    {
        *cstr=*str;
        str++;
        cstr++;
    }
    *cstr='\0';
}
int userstrlen(char *str)
{
    int length=0;
    while(*str!='\0')
    {
       length++;
       str++;
    }
    return length;
}
