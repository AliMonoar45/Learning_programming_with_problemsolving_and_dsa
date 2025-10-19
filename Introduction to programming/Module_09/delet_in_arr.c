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
    int indx;
    scanf("%d", &indx);
    for (int i = indx; i <sz-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    
    for (int i = 0; i < sz-1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}