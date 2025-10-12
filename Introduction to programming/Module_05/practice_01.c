#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    long long int multi = 1LL * x * y;
    int subs = x - y;
    printf("%d + %d = %d\n", x, y, sum);
    printf("%d * %d = %lld\n", x, y, multi);
    printf("%d - %d = %d\n", x, y, subs);
    return 0;
}