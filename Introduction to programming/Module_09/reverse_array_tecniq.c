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

    for (int i = 0; i < sz/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[sz - 1 - i];
        arr[sz - 1 - i] = temp;
    }

    // for (int i = 0, j = sz - 1; i < j; i++, j--)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    // }

    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}