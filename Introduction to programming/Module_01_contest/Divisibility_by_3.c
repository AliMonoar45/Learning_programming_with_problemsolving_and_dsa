#include <stdio.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    char a[sz + 1];
    scanf("%s", &a);
    // printf("%s", a);
    long long int sum = 0;

    for (int i = 0; i <= sz; i++)
    {
        sum += a[i];
    }
    // printf("%lld", sum);
    if (sum % 3 != 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}