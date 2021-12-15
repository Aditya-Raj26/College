#include <stdio.h>
#include <stdlib.h>

int main()
{
    int AUTO[31], i = 0, x, p;
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
    printf("\nEnter the value of position 'p' where the element has to be updated:");
    scanf("%d", &p);

    x = 250 + rand() % 101;
    AUTO[p] = x;

    printf("\nAfter updating the value at %d th position\nModified array is:\n", p);
    for (i = 0; i < 30; i++)
    {
        printf("%d  ", AUTO[i]);
    }
    printf("\n");
    return 0;
}
