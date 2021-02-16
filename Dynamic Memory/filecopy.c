#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fpr, *fpw;
    int ch;
    fpr = fopen("cloud.jpg","rb");
    fpw = fopen("newcloud.jpg","wb");
    if(fpr==NULL)
    {
        printf("File not found");
    }
    else
    {
        while((ch=fgetc(fpr))!=EOF)
        {
            fputc(ch,fpw);
        }
        printf("File copied");
    }
    return 0;
}
