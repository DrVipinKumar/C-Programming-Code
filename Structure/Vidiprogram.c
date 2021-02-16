#include<stdio.h>
struct IBM
{
    int empid,empsal,empno;
    char empn[20];
    char empadd[20];
};
int main(int argc, char const *argv[])
{
    int n,i,id;
    struct IBM s1[10];
    printf("how many employes data you want to store");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter employe id");
        scanf("%d",&s1[i].empid);
        printf("\n enter the employe name");
        scanf("%s",s1[i].empn);
        printf("\nenter the employe address");
        scanf("%s",s1[i].empadd);
        printf("\nenter the employe phone no");
        scanf("%d",&s1[i].empno);
        printf("\n enter the employe salary");
        scanf("%d",&s1[i].empsal);
    }
    printf("\n display all record");
    for(i=0;i<n;i++)
    {
        printf("\n employe id=%d",s1[i].empid);
        printf("\n employe name=%s",s1[i].empn);
        printf("\n emplotye address=%s",s1[i].empadd);
        printf("\n employe phone no=%d",s1[i].empno);
        printf("\n employee salary=%d",s1[i].empsal);
    }
    return 0;
}