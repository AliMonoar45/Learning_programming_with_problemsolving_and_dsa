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
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] > arr[j]) // serial not ok
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}