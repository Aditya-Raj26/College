#include <stdio.h>
#include <stdlib.h>

int main()
{
    int AUTO[31], i = 0, x;
    for (i = 0; i < 30; i++)
    {
        AUTO[i] = 250 + rand() % 101;
    }

    printf("Original array is:\n");
    for (i = 0; i < 30; i++)
    {
        printf("%d  ", AUTO[i]);
    }

    printf("\n");
    x = 250 + rand() % 101;
    AUTO[30] = x;

    printf("\nAfter inserting element at the end\nModified array is  :\n");
    for (i = 0; i < 31; i++)
    {
        printf("%d  ", AUTO[i]);
    }
    printf("\n");
    return 0;
}
