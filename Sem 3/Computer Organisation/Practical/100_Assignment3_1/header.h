int multiplication_unsigned_binary_numbers_Y20CS100(int a, int b)
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