#include <stdio.h>

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int maxPathSum(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;

    int result = 0, sum1 = 0, sum2 = 0;

    // Below 3 loops are similar to merge in merge sort
    while (i < m && j < n)
    {

        if (arr1[i] < arr2[j])
            sum1 += arr1[i++];

        else if (arr1[i] > arr2[j])
            sum2 += arr2[j++];

        else
        {
            result += max(sum1, sum2) + arr1[i];

            sum1 = 0;
            sum2 = 0;

            i++;
            j++;
        }
    }
    // Add remaining elements of ar1[] ans arr2
    while (i < m)
        sum1 += arr1[i++];

    while (j < n)
        sum2 += arr2[j++];

    // Add maximum of two sums of remaining elements
    result += max(sum1, sum2);

    return result;
}
int main()
{
    int arr1[] = {3, 6, 7, 8, 10, 12, 15, 18, 100};
    int arr2[] = {1, 2, 3, 5, 7, 9, 10, 11, 15, 16, 18, 25, 50};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    printf("The maximum sum is %d", maxPathSum(arr1, arr2, m, n));

    return 0;
}