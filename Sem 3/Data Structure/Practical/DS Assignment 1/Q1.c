#include <stdio.h>
#include <stdlib.h>

int main()
{

    int yokohama[5][365], paris[5][365], rio[5][365], saitama[5][365], mumbai[5][365];
    int i, j;

    // ITERATING LOOPS FOR GENERATING RANDOM NUMBERS.
    // 2-D ARRAY FOR WHERE ONE SECTION FOR YEARS AND OTHER ONE FOR DAYS.

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 365; j++)
        {
            yokohama[i][j] = 20 + rand() % 21;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 365; j++)
        {
            paris[i][j] = 20 + rand() % 21;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 365; j++)
        {
            rio[i][j] = 20 + rand() % 21;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 365; j++)
        {
            saitama[i][j] = 20 + rand() % 21;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 365; j++)
        {
            mumbai[i][j] = 20 + rand() % 21;
        }
    }

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            sum += yokohama[i][j];
        }
    }
    int avgYokohama = (sum / (365 * 5));

    sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            sum += paris[i][j];
        }
    }
    int avgParis = (sum / (365 * 5));

    sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            sum += rio[i][j];
        }
    }
    int avgRio = (sum / (365 * 5));

    sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            sum += saitama[i][j];
        }
    }
    int avgSaitama = (sum / (365 * 5));

    sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            sum += mumbai[i][j];
        }
    }
    int avgMumbai = (sum / (365 * 5));

    printf("LAST 5 YEARS AVERAGE OF TOKYO IS %d.\n", avgYokohama);
    printf("LAST 5 YEARS AVERAGE OF PARIS IS %d.\n", avgParis);
    printf("LAST 5 YEARS AVERAGE OF BERLIN IS %d.\n", avgRio);
    printf("LAST 5 YEARS AVERAGE OF AHMEDABAD IS %d.\n", avgSaitama);
    printf("LAST 5 YEARS AVERAGE OF MUMBAI IS %d.\n", avgMumbai);

    float avgEarth = (avgMumbai + avgParis + avgRio + avgYokohama + avgSaitama) / 5;
    printf("AVERAGE OF EARTH IS %f.\n", avgEarth);
    return 0;
}