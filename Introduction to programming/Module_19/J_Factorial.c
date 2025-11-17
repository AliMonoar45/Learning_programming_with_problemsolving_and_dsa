#include <stdio.h>
long long int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    long long int fac = n * factorial(n - 1);
    return fac;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%d", 1);
    }

    long long int fec = factorial(n);
    printf("%lld", fec);
    return 0;
}