#include <stdio.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    int idx;
    scanf("%d", &idx);
    for (int i = idx; i < sz-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    sz--;
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}