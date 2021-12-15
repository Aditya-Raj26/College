#include <stdio.h>
#include <stdlib.h>

int main()
{
    int AUTO[31], i = 0, x, p;
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
    printf("\nEnter the value of position 'p' where the element has to be inserted:");
    scanf("%d", &p);

    x = 250 + rand() % 101;
    for (i = 30; i >= p; i--)
    {
        AUTO[i + 1] = AUTO[i];
    }
    AUTO[p] = x;

    printf("\n");
    printf("After inserting element at %d th position\nModified array is :\n", p);
    for (i = 0; i < 31; i++)
    {
        printf("%d  ", AUTO[i]);
    }
    printf("\n");
    return 0;
}
