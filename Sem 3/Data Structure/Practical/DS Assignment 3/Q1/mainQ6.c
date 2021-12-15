#include <stdio.h>
#include "string.h"

int main()
{
    char str1[60], str2[60];
    printf("Enter the string: ");
    gets(str1);
    printf("\nEnter the substring(to check it is present in the string or not) : ");
    gets(str2);

    printf("\n");
    substring_presence(str1, str2);
    return 0;
}
