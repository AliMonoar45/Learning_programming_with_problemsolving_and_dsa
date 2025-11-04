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
    int goods = 0;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] % 2 == 0 && arr[j] % 2 != 0)
            {
                goods++;
            }
            else if (arr[i] % 2 != 0 && arr[j] % 2 == 0)
            {
                goods++;
            }
        }
    }
    printf("%d", goods);

    return 0;
}