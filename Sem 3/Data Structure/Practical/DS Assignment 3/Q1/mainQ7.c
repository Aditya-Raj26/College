#include <stdio.h>
#include "string.h"

int main()
{
    char str[100];
    printf("Enter the string : ");
    gets(str);

    reverse_string(str);
    printf("\nThe reversed string is : %s\n", str);

    return 0;
}