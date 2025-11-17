#include <stdio.h>
int max_in_arr(int arr[], int sz)
{
    if (sz < 0)
    {
        return arr[0];
    }
    int max_val = max_in_arr(arr, sz - 1);
    if (max_val < arr[sz])
    {
        return arr[sz];
    }
    else
    {
        return max_val;
    }
}

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max_val = max_in_arr(arr, sz - 1);
    printf("%d", max_val);
    return 0;
}