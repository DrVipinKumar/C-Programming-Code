#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    char data[]="this is my data to be writed in file using fputs functions.";
    fp=fopen("fputsdata.txt","a");
    if(fp==NULL)
    {
        printf("File not created");
    }
    else
    {
        fputs(data,fp);
        printf("File updated");
    }
    
    return 0;
}
