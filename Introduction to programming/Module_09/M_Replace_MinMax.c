#include <stdio.h>
#include <limits.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    int mn = INT_MAX,
        mx = INT_MIN;
    int mn_i, mx_i;

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
            mn_i = i;
        }
        if (arr[i] > mx)
        {
            mx = arr[i];
            mx_i = i;
        }
        }
    int temp = arr[mn_i];
    arr[mn_i] = arr[mx_i];
    arr[mx_i] = temp;

    // printf("%d %d\n%d %d\n", mn, mx, mn_i, mx_i);

    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}