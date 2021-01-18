#include <stdio.h>
int main(int argc, char const *argv[])
{
    int data[] = {12, 34, 56, 78, 90, 17, 34, 13, 45, 67}; //insertion at specific postion in array
    int value, position = -1;
    int i = 0;
    int x, y;
    int len = 10;
    printf("Enter position to delete value=>");
    scanf("%d", &position);
    printf("\nPresent values in array are=>\n");
    for (i = 0; i < len; i++)
    {
        printf(" %d", data[i]);
    }

    for (x = position - 1; x < len; x++) //left shift
    {
        data[x] = data[x + 1];
    }
    len = len-1;

    printf("\nArray after deletion is=>\n");
    for (i = 0; i < len; i++)
    {
        printf(" %d", data[i]);
    }

    return 0;
}
