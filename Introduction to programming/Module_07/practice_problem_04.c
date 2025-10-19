#include <stdio.h>
#include <limits.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    int max = INT_MIN;
    for (int i = 0; i < sz; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < sz; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}