#include <stdio.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (int i = 0; i < sz; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = sz - 1; i >= 0; --i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n" );
    int a[10] = {10};
    for(int i = 0;i <10;i++)
    {
    printf("%d ", a[i]);
    }

    return 0;
}