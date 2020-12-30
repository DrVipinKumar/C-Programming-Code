#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int inum=10;
    float fnum=10.2;
    double dnum=10.2;
    long lnum=10;
    char cname='A';
    char sname[10]="KIET";
    printf("%120d\n",inum);

    printf("int =%4d, float=%80f,double=%10lf,long=%10ld,char=%c,String=%s",inum,fnum,dnum,lnum,cname,sname);
    return 0;
}
