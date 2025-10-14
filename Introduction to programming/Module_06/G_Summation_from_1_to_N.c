#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += (long long int)i;
    }
    printf("%lld", sum);

    // int n;
    // scanf("%d", &n);
    // long long int sum = (long long int)n * (n + 1) / 2;

    // printf("%lld", sum);

    return 0;
}