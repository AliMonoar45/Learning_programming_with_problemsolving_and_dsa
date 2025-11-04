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
    int mx = INT_MIN, mx_idx,
        mn = INT_MAX, mn_idx;

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            mx_idx = i;
        }
        if (arr[i] < mn)
        {
            mn = arr[i];
            mn_idx = i;
        }
    }
    arr[mn_idx] = mx;
    arr[mx_idx] = mn;

    // int temp = arr[mn_idx];
    // arr[mn_idx] = arr[mx_idx];
    // arr[mx_idx] = temp;
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}