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
    int sum = 0;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
    }
    printf("sum of all elements: %d", sum);

    return 0;
}