#include <stdio.h>
int main(){
    FILE *fp;
    char str[7];
    fp=fopen("demo.txt","r");// demo.txt :you are a good programmer
    fgets(str,6,fp);
    puts(str);
    fclose(fp);
    return 0;
}