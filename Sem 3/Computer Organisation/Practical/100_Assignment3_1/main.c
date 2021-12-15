#include <stdio.h>
#include "header.h"
int main()
{
    int a, b;
    int add;

    printf("Enter binary number 1: ");
    scanf("%d", &a);

    printf("Enter binary number 2: ");
    scanf("%d", &b);

    add = a;
    for (int i = 0; i < (b - 1); i++)
    {
        add = multiplication_unsigned_binary_numbers_Y20CS100(add, a);
    }

    printf("\n The answer is: %d", add);
}