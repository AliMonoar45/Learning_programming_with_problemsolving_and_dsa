#include <stdio.h>
#include <limits.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    int min = INT_MAX;
    for (int i = 0; i < sz; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < sz; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}