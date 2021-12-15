#include <stdio.h>
#include <stdlib.h>

int main()
{
    int AUTO[30], i = 0;
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
    for (i = 0; i < 29; i++)
    {
        AUTO[i] = AUTO[i + 1];
    }

    printf("\n");

    printf("After deleting element at the beginning\nModified array is :\n");
    for (i = 0; i < 29; i++)
    {
        printf("%d  ", AUTO[i]);
    }
    printf("\n");
    return 0;
}
