#include <stdio.h>
#include <stdlib.h>

int main()
{
    int AUTO[30], i = 0, p;
    for (i = 0; i < 30; i++)
    {
        AUTO[i] = 250 + rand() % 101;
    }
    printf("Original array AUTO[] is:\n");
    for (i = 0; i < 30; i++)
    {
        printf("%d  ", AUTO[i]);
    }
    printf("\n");

    printf("\nEnter the value of position 'p' where the element has to be deleted:");
    scanf("%d", &p);

    for (i = p; i < 29; i++)
    {
        AUTO[i] = AUTO[i + 1];
    }

    printf("\nAfter deleting element at %d th position\nModified array is :\n", p);
    for (i = 0; i < 29; i++)
    {
        printf("%d  ", AUTO[i]);
    }
    printf("\n");
    return 0;
}
