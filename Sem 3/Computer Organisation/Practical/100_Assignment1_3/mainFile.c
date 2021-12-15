#include <stdio.h>
#include "header.h"

int main()
{
    //q1
    int arr1[32] = {0}, k = 0, n1;
    printf("Enter decimal number: ");

    scanf("%d", &n1);
    decimal_to_unsigned_binary_U20CS100(n1, arr1);
    for (int i = 0; i < 32; i++)
    {
        if (arr1[i] == 0)
            k++;
        else
            break;
    }
    for (int i = k; i < 32; i++)
    {
        printf("%d", arr1[i]);
    }
    printf("\n");

    //q2
    int n2;

    printf("Enter decimal number: ");
    scanf("%d", &n2);

    printf("%d ", binary_to_hexad_U20CS100(n2));
    printf("\n");

    //q3
    int arr3[32] = {0}, n3, n4;

    printf("Enter two binary digits:");
    scanf("%d %d", &n3, &n4);
    k = 0;
    subtraction_unsigned_binary_numbers_U20CS100(n3, n4, arr3);

    for (int i = 0; i < 32; i++)
    {
        if (arr3[i] == 0)
            k++;
        else
            break;
    }
    for (int i = k; i < 32; i++)
    {

        printf("%d", arr3[i]);
    }
    printf("\n");

    //q4
    int arr4[32] = {0}, n5, n6;

    printf("Enter two binary digits:");
    scanf("%d %d", &n5, &n6);
    subtraction_signed_binary_numbers_U20CS100(n5, n6, arr4);
    k = 0;

    for (int i = 0; i < 32; i++)
    {
        if (arr4[i] == 0)
            k++;
        else
            break;
    }

    for (int i = k; i < 32; i++)
    {

        printf("%d", arr4[i]);
    }

    printf("\n");

    return 0;
}