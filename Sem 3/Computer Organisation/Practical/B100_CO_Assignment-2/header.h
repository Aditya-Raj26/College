#include <stdio.h>

int binAddition(int a, int b)
{
    int c;
    while (b != 0)
    {

        c = (a & b) << 1;

        a = a ^ b;
        b = c;
    }
    return a;
}

int binSubtraction(int a, int b)
{
    int carry;

    b = binAddition(~b, 1);

    while (b != 0)
    {

        carry = (a & b) << 1;

        a = a ^ b;
        b = carry;
    }
    return a;
}

void division_unsigned_binary_numbers_Y20CS100(int a, int b)
{
    int count = 0;
    int rem;

    while (a >= b)
    {
        a = binSubtraction(a, b);
        count++;
    }
    rem = a;
    printf("The answer is %d with a remainder of %d ", count, rem);
}