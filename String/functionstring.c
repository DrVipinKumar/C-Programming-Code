#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char fname[11]="Vipin";
    char lname[10]="Kumar";
    char copyname[25];
    int l=strlen(fname);
    printf("Length of string=%d",l);
    char *fullname=strcat(fname,lname);
    printf("\n%s",fullname);
    strcpy(copyname,fullname);
    printf("\n%s",copyname);
    int match=strcmp(lname,fullname);
    if(match==-1)
    {
        printf("Not match");
    }
    else
    {
        printf("Match");
    }
    
    return 0;
}