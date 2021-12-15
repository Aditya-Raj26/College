#include <stdio.h>
int main()
{
    int arr1[100], n, ctr;
    int i, j, k;

    printf("Enter the number of element to be stored in array: ");
    scanf("%d", &n);

    printf("Enter the %d element in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("The uniques elements are: ");
    for (i = 0; i < n; i++)
    {
        ctr = 0;
        for (j = 0, k = n; j < k + 1; j++)
        {
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    ctr++;
                }
            }
        }
        if (ctr == 0)
        {
            printf("%d", arr1[i]);
        }
    }
    return 0;
}