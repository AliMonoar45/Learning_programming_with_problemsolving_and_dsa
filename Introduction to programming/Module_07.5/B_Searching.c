#include <stdio.h>

int main()
{
    int sz, target;
    scanf("%d", &sz);
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("%d", -1);

    return 0;
}