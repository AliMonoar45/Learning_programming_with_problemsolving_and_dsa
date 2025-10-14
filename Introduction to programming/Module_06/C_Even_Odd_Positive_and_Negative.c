#include <stdio.h>

int main()
{
    int n,
        even = 0,
        odd = 0,
        pos = 0,
        neg = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0 || x == 0)
        {
            even++;
        }
        else if (x % 2 != 0&&x!=0)
        {
            odd++;
        }
        if (x > 0)
        {
            pos++;
        }
        else if (x < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);

    return 0;
}