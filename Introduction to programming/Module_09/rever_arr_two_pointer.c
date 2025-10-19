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
    int i = 0,
        j = sz - 1;
        while (i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;

        }

        for (int i = 0; i < sz; i++)
        {
            printf("%d ", arr[i]);
        }

    return 0;
}