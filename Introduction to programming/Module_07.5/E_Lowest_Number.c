#include <stdio.h>
#include <limits.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = INT_MAX;
    int pos;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }
    printf("%d %d", min,pos+1);

    return 0;
}