#include <stdio.h>

int main()
{
    int sz;
    scanf("%d", &sz);

    int arr[sz + 1];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    int indx, val;
    scanf("%d %d", &indx, &val);
    for (int i = sz; i >= indx+1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[indx] = val;
    for (int i = 0; i <= sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}