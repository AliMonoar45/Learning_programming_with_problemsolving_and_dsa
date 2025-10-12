#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    long long int difference = (1LL * a * b) - (1LL * c * d);
    printf("Difference = %lld", difference);
    return 0;
}