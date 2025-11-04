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
    int fre[6] = {0};

    for (int i = 0; i < sz; i++)
    {
        fre[arr[i]]++;
        // if (arr[i] == 0)
        // {
        //     fre[0]++;
        // }
        // else if (arr[i] == 1)
        // {
        //     fre[1]++;
        // }
        // else if (arr[i] == 2)
        // {
        //     fre[2]++;
        // }
        // else if (arr[i] == 3)
        // {
        //     fre[3]++;
        // }
        // else if (arr[i] == 4)
        // {
        //     fre[4]++;
        // }
        // else if (arr[i] == 5)
        // {
        //     fre[5]++;
        // }
    }
    printf("%d -> %d\n", 0, fre[0]);
    printf("%d -> %d\n", 1, fre[1]);
    printf("%d -> %d\n", 2, fre[2]);
    printf("%d -> %d\n", 3, fre[3]);
    printf("%d -> %d\n", 4, fre[4]);
    printf("%d -> %d\n", 5, fre[5]);

    return 0;
}