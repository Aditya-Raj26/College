#include <stdio.h>
#include "string.h"

int main()
{
    char str[100];
    printf("Enter the string : ");
    gets(str);

    replace_string(str);
    printf("\nThe replaced string (vowels with * and consonants with #) is: %s\n", str);

    return 0;
}
