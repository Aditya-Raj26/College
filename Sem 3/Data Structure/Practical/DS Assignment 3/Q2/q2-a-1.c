#include <stdio.h>
#include <stdlib.h>

int main()
{
    int AUTO[31], i = 0, x;
    for (i = 0; i < 30; i++)
    {
        AUTO[i] = 250 + rand() % 101;
    }

    printf("Original array AUTO[]is:\n");
    for (i = 0; i < 30; i++)
    {
        printf("%d  ", AUTO[i]);
    }

    x = 250 + rand() % 101;
    for (i = 29; i >= 0; i--)
    {
        AUTO[i + 1] = AUTO[i];
    }

    AUTO[0] = x;
    printf("\n");
    printf("\nAfter inserting element in the beginning\nModified array is :\n");
    for (i = 0; i < 31; i++)
    {
        printf("%d  ", AUTO[i]);
    }
    printf("\n");
    return 0;
}
