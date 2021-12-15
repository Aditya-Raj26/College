#include <stdio.h>
#include <stdlib.h>

void rearr_alt_pos(int arr[], int n)
{
    int i, j;
    j = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}
int main()
{
    int n, i;
    printf("\nEnter the number of element: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    rearr_alt_pos(arr, n);
    printf("\n The rearranged array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ,", arr[i]);
    }
    return 0;
}