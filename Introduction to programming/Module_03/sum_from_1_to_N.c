#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0,
        sumWhile = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum from 1 to %d = %d\n", n, sum);

    int j = 1;
    while (j <= n)
    {
        sumWhile = sumWhile + j;
        j++;
    }
    printf("using while sum from 1 to %d = %d\n", n, sumWhile);
    return 0;
}