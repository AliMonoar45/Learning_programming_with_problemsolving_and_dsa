#include <stdio.h>
void print_arr(int arr[], int n, int i)
{
    if (i==n)
    {
        return;
    }
    
    printf("%d ", arr[i]);
    print_arr(arr, n, i + 1);
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
    print_arr(arr, sz, 0);

    return 0;
}