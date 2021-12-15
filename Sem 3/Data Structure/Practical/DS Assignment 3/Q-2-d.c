#include <stdio.h>
#include <stdlib.h>

int main()
{
    int AUTO[30], i = 0;
    for (i = 0; i < 30; i++)
    {
        AUTO[i] = 250 + rand() % 101;
    }

    printf("The array AUTO[] is:\n");
    for (i = 0; i < 30; i++)
    {
        printf("%d  ", AUTO[i]);
    }
    printf("\n");
    printf("\nThe index of the elements during which more than 300 automobiles were sold is:\n");
    for (i = 0; i < 30; i++)
    {
        if (AUTO[i] > 300)
        {
            printf(" %d\n", i);
        }
    }
    return 0;
}
