#include <stdio.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz + 1];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    int idx, val;
    scanf("%d %d", &idx, &val);

    for (int i = sz; i >= idx + 1; i--)   // here i >= idx+1 because we just need to move the bar from only given index
    {
        arr[i] = arr[i - 1];
    }
    arr[idx] = val;
    for (int i = 0; i < sz + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}