#include<stdio.h>

int main(int argc, char const *argv[])
{
    int valueg=10;
    enum Temp
    {
    Delhi=2, Mumbai=3, Muradnagar=5, Ghaziabad=6, log2=301
    };
    enum Temp today=Delhi;
    printf("\nDelhi temperature =%d degree",today);
    today=Mumbai;
    printf("\nMumbai temperature =%d degree",today);
     printf("\nMuradnagar temperature =%d degree",Muradnagar);
     printf("Log2=0.%d",log2);
    return 0;
}

