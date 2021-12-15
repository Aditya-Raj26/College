#include <stdio.h>
#include <stdlib.h>

// Function to find the closest pair to `sum` in given sorted arrays
void findClosestPair(int first[], int second[], int m, int n, int sum)
{
    int x = 0, y = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // update the closest pair if the current pair `(i, j)` is more
            if (abs(first[i] + second[j] - sum) < abs(first[x] + second[y] - sum))
            {
                x = i;
                y = j;
            }
        }
    }

    printf("The closest pair is [%d, %d]", first[x], second[y]);
}

int main(void)
{
    int first[] = {1, 8, 10, 12};
    int second[] = {2, 4, 9, 15};
    int sum = 11;

    int m = sizeof(first) / sizeof(first[0]);
    int n = sizeof(second) / sizeof(second[0]);

    findClosestPair(first, second, m, n, sum);

    return 0;
}