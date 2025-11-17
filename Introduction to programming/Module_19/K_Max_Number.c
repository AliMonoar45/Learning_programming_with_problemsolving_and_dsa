#include <stdio.h>
#include <limits.h>
void input_arr(int arr[], int sz, int idx)
{
    // base case
    if (idx == sz)
        return;
    // work
    scanf("%d", &arr[idx]);
    // call recursive
    input_arr(arr, sz, idx + 1);
}
void print_arr(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}
int max_in_arr(int arr[], int sz)
{
    if (sz < 0)
        return arr[0];
    int max_val = max_in_arr(arr, sz - 1);
    if (max_val < arr[sz])
        return arr[sz];
    else
        return max_val;
}
int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    input_arr(arr, sz, 0);
    // for (int i = 0; i < sz; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    int max_val = max_in_arr(arr, sz-1);
    printf("%d", max_val);
}