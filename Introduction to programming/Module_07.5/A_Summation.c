#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
    }
    printf("%lld", abs(sum));
    return 0;
}