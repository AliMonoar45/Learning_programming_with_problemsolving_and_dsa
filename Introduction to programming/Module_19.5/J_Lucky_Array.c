#include <stdio.h>
void arr_input(int arr[], int sz, int idx)
{
    if (idx == sz)
    {
        return;
    }
    scanf("%d", &arr[idx]);
    arr_input(arr, sz, idx + 1);
}
void arr_output(int arr[], int sz, int idx)
{
    if (idx == sz)
    {
        return;
    }
    printf("%d ", arr[idx]);
    arr_output(arr, sz, idx + 1);
}
int min_in_arr(int arr[], int sz)
{
    if (sz < 0)
    {
        return arr[0];
    }
    int min_val = min_in_arr(arr, sz - 1);
    if (min_val > arr[sz])
    {
        return arr[sz];
    }
    else
    {
        return min_val;
    }
}
int frequency_min(int arr[], int sz, int min_val)
{
    if (sz == 0)
    {
        if (arr[sz] == min_val)
        {
            return 1;
        }

        return 0;
    }
    if (arr[sz] == min_val)
    {
        return 1 + frequency_min(arr, sz - 1, min_val);
    }
    else
    {
        return frequency_min(arr, sz - 1, min_val);
    }
}
int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    arr_input(arr, sz, 0);
    int min_val = min_in_arr(arr, sz - 1);
    int fre = frequency_min(arr, sz - 1, min_val);
    if (fre % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    // printf("%d %d", min_val, fre);
    return 0;
}