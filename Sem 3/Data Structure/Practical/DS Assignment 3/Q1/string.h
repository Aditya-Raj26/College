//to find length of the string
int length(char A[])
{

    int x = 0, i;
    for (i = 0; A[i] != 0; i++)
    {
        x = x + 1;
    }

    return x;
}

// Q2

int concat(char A[], char B[])
{
    int i, j, x1, x2;
    for (i = 0; A[i] != 0; i++)
    {
        x1 = x1 + 1;
    }
    for (i = 0; B[i] != 0; i++)
    {
        x2 = x2 + 1;
    }

    for (j = 0; j < x2; j++)
    {
        A[x1 + j] = B[j];
    }

    A[x1 + x2] = '\0';
}

// Q3

int copyString(char a[], char b[])
{
    int flag = 0, i = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }

    b[i] = '\0';
}

// Q4

int compare(char a[], char b[])
{
    int flag = 0, i = 0;
    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}

// Q5
void character_c_presence(char str[])
{

    int i, k, count = 0;
    for (i = 0; str[i] != 0; i++)
    {

        if (str[i] == 'c')
        {
            k = i;
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("The character 'c' isn't present in  %s \n", str);
    }
    else
    {
        printf("The first occurance of character 'c' in %s is at index = %d and position = %d\n", str, k, k + 1);
    }
}

// Q6

void substring_presence(char str1[], char str2[])
{
    int p, i, j, q, count = 0;
    while (str2[p] != '\0' && p < 59)
        p++;

    for (i, j; str1 != '\0' && str2 != '\0' && i < 59 && j < 59; i++)
    {
        q = i;
        j = 0;
        while (str1[i] == str2[j] && str2[j] != '\0')
        {
            j++;
            i++;
        }
        if (j == p)
        {
            count++;
        }
        i = q;
    }
    if (count == 0)
        printf("The substring '%s' is not there in the string\n", str2);
    else
        printf("The substring '%s' is present in the string\n", str2);
}

// Q7
void reverse_string(char str[])
{
    int i, n, j, t;
    for (i = 0; str[i] != 0; i++)
    {
        n = n + 1;
    }
    for (i = 0, j = n - 1; i <= j; i++, j--)
    {
        t = str[i];
        str[i] = str[j];
        str[j] = t;
    }
}

// Q8
void replace_string(char A[])
{
    int j;
    for (j = 0; A[j] != 0; j++)
    {
        if ((A[j] == 'a') || (A[j] == 'e') || (A[j] == 'i') || (A[j] == 'o') || (A[j] == 'u') || (A[j] == 'A') || (A[j] == 'E') || (A[j] == 'I') || (A[j] == 'O') || (A[j] == 'U'))
        {
            A[j] = '*';
        }
        else
        {
            A[j] = '#';
        }
    }
}