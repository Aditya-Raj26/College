#include <stdio.h>
#include <stdlib.h>

int main()
{
    int AUTO[30], i = 0;
    for (i = 0; i < 30; i++)
    {
        AUTO[i] = 250 + rand() % 101;
    }
    printf("Original array AUTO[]is:\n");
    for (i = 0; i < 30; i++)
    {
        printf("%d  ", AUTO[i]);
    }

    printf("\n");
    AUTO[29] = "\0";
    printf("\nAfter deleting the last element of the array\nModified array is:\n");
    for (i = 0; i < 29; i++)
    {
        printf("%d  ", AUTO[i]);
    }
    printf("\n");
    return 0;
}
