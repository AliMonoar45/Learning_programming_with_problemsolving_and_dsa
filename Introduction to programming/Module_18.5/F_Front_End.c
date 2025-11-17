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
    if (sz % 2 == 0)
    {
        for (int i = 0, j = sz - 1; i < j; i++, j--)
        {
            printf("%d %d ", arr[i], arr[j]);
        }
    }
    if (sz % 2 != 0)
    {
        int i = 0;
        int j = sz - 1;
        while (i < j)
        {
            printf("%d %d ", arr[i], arr[j]);
            i++, j--;
        }
        printf("%d", arr[i]);
    }

    return 0;
}