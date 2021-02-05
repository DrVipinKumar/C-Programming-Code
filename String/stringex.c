#include<stdio.h>
int main(int argc, char const *argv[])
{
    char data[5]={'a','b','c','d','e'};//character array
    char data1[5]={'A','B','C','D','\0'};//character array
    char sdata[7]="KIETMCA"; //String in C
    char *psdata="This is my pointer string";
    printf("\n%s",psdata+6);
    char twodstring[4][14]={
                                  {"kiet"},
                                  {"mca"},
                                  {"cs"},
                                  {"ksop"}
                            };
    
    printf("\n%s",data1);
    printf("\n%s",psdata);
    for(int j=0;j<4;j++)
    {
        printf("\n%s",twodstring[j]);
    }
    return 0;
}
