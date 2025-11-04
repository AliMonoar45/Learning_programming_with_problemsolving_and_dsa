#include <stdio.h>
void rev(int arr[], int sz)
{
    for (int i = 0, j = sz - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
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
    rev(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}