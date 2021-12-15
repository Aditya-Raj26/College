#include <stdio.h>
#include <stdlib.h>

int main()
{
    int AUTO[30], i = 0;
    for (i = 0; i < 30; i++)
    {
        AUTO[i] = 250 + rand() % 101;
    }

    printf("Index of each element of array and corresponding number of automobiles sold: \n\n");
    for (i = 0; i < 30; i++)
    {
        printf(" Index = %d  - AUTO[%d] = %d\n", i, i, AUTO[i]);
    }
    return 0;
}
