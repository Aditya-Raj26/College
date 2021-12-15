#include <stdio.h>
#include "string.h"

int main()
{

    char str[100];
    printf("Enter the string: ");
    gets(str);

    printf("The length of the string is : %d\n", length(str));
}
