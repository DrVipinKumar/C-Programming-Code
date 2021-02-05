#include<stdio.h>
int main(int argc, char const *argv[])
{
 char data[2][6]={"hello","this"};
 char (*p)[6];
 p=data;
 printf("%c  %c\n ",**p,*(*p+1)+0);
 printf("%s\n",*(p+0));
 printf("%s\n",*(p+1));
 return 0;
}