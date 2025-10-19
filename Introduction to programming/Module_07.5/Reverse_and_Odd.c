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

    for (int i = sz - 1; i > 0; i--)
    {
        if (i % 2 != 0)
        {

            printf("%d ", arr[i]);
        }
    }

    return 0;
}