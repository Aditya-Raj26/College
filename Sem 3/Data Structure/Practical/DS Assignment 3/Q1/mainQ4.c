#include <stdio.h>
#include "string.h"

int compare(char[], char[]);
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter the first string : ");
    scanf("%s", str1);
    printf("Enter the second string : ");
    scanf("%s", str2);
    int c = compare(str1, str2);
    if (c == 0)
        printf("strings are same");
    else
        printf("strings are not same");

    return 0;
}
