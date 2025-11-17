#include <stdio.h>

int main()
{
    long long int a, b, d;
    scanf("%lld %lld %lld", &a, &b, &d);
    if (a % d == 0 && b % d == 0)
        printf("Both");
    else if (a % d == 0 && b % d != 0)
        printf("Memo");
    else if (a % d != 0 && b % d == 0)
        printf("Momo");
    else
        printf("No One");
    return 0;
}