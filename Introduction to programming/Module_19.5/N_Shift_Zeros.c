#include <stdio.h>
void print_num(int arr[], int sz, int idx)
{
    if (idx == sz)
    {
        return;
    }
    if (arr[idx] != 0)
    {
        printf("%d ", arr[idx]);
    }
    print_num(arr, sz, idx + 1);
}
void print_zero(int arr[],int sz,int idx){
    if (idx == sz)
    {
        return;
    }
    if (arr[idx] == 0)
    {
        printf("%d ", arr[idx]);
    }
    print_zero(arr, sz, idx + 1);
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

    print_num(arr, sz , 0);
    print_zero(arr, sz , 0);
    return 0;
}