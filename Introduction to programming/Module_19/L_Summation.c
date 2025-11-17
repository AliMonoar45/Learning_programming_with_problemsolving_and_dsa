#include <stdio.h>
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
long long int summation(int arr[], int sz)
{
    if (sz < 0)
    {
        return 0;
    }

    
    return arr[sz] + summation(arr, sz - 1);
}
int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    input_arr(arr, sz, 0);
    
    printf("%lld", summation(arr, sz - 1));
    return 0;
}