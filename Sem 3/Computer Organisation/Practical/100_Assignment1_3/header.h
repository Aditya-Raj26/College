#include <stdio.h>
#include <math.h>

//q1
void decimal_to_unsigned_binary_U20CS100(int x, int ar[])
{
    int i = 0, a = x;
    while (a)
    {
        ar[32 - i - 1] = a % 2;
        a = a / 2;
        i++;
    }
}

//extra function
int binary_to_decimal(int b)
{
    int ans = 0, temp, i = 0;
    while (b)
    {
        temp = b % 10;
        ans += pow(2, i) * temp;
        i++;
        b /= 10;
    }
    return ans;
}

//q2
int binary_to_hexad_U20CS100(int x)
{
    int ar[32] = {0}, b = 0;
    decimal_to_unsigned_binary_U20CS100(x, ar);
    for (int i = 31; i >= 0; i--)
    {
        b += pow(10, 31 - i) * ar[i];
    }
    int temp, ind = 1, ans = 0;
    while (b)
    {
        temp = b % 1000;
        temp = (temp / 100) * 4 + ((temp % 100) / 10) * 2 + (temp % 10) * 1;
        ans += temp * ind;
        ind *= 10;
        b /= 1000;
    }
    return ans;
}

//q3
void subtraction_unsigned_binary_numbers_U20CS100(int a, int b, int ar[])
{
    a = binary_to_decimal(a);
    b = binary_to_decimal(b);
    int ans = 0;
    if (a > b)
        ans = a - b;
    else
        ans = b - a;
    decimal_to_unsigned_binary_U20CS100(ans, ar);
}

//q4

void subtraction_signed_binary_numbers_U20CS100(int a, int b, int ar[])
{
    a = binary_to_decimal(a);
    b = binary_to_decimal(b);
    int ans = a - b;
    if (ans < 0)
    {
        decimal_to_unsigned_binary_U20CS100(-1 * ans, ar);
        ar[0] = 1;
    }
    else
    {
        decimal_to_unsigned_binary_U20CS100(ans, ar);
    }
}
