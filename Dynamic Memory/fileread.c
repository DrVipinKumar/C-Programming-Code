#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    char ch;
          fp=fopen("callocex.c","r");
          if(fp==NULL)
          {
              printf("File not found");
          }
          else
          {
              while((ch=fgetc(fp))!=EOF)
              {
                  printf("%c",ch);
              }
          }
          
    return 0;
}
