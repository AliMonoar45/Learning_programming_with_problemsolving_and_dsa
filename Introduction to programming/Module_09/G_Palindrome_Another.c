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
    // int i = 0, j = sz - 1;
    // while (i < j)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     if (arr[i] != arr[j])
    //     {
    //         printf("NO");
    //         return 0;
    //     }
    //     i++;
    //     j--;
    // }
    // printf("YES");

    for (int i = 0, j = sz - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}