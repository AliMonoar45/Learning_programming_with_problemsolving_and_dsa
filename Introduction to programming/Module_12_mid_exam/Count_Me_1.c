#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int dev_2 = 0;
    int dev_3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0 && arr[i] % 2 != 0)
        {
            dev_3++;
        }
        else if (arr[i] % 2 == 0)
        {
            dev_2++;
        }
    }
    printf("%d %d", dev_2,dev_3);

    return 0;
}