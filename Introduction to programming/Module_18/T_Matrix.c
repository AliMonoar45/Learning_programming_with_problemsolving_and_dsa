#include <stdio.h>

int primary_sum(int r, int c, int arr[r][c])
{
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {

                sum += arr[i][j];
            }
        }
    }
    return sum;
}
int secondary_sum(int r, int c, int arr[r][c])
{
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i + j == r - 1)
            {

                sum += arr[i][j];
            }
        }
    }
    // printf("%d", sum);
    return sum;
}
int absolute(int n)
{
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}
int main()
{
    int r;
    scanf("%d", &r);
    int arr[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum_primary = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == j)
            {

                sum_primary += arr[i][j];
            }
        }
    }
    int sum_secondary = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i + j == r - 1)
            {

                sum_secondary += arr[i][j];
            }
        }
    }

    int summation = absolute(sum_primary - sum_secondary);
    printf("%d", summation);
    return 0;
}