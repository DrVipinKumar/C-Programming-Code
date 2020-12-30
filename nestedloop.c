#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,z,ch=97;
    start:
    for(i=0;i<5;i++)   //5 times
    {
        
        printf("\ni=%d=>",i);
        for(j=0;j<5;j++)   // 5 * 5=25 times
        {
            if(i==2)
            goto end;
            printf(" %c",ch);
            ch++;
            
        }
    
    }
    printf("This is end label");
    goto start;
    end:
    return 0;
}
