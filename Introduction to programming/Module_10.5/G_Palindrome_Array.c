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
    int l = 0;
    int r = sz - 1;
    while (l < r)
    {
        if (arr[l] != arr[r])
        {
            printf("NO");
            return 0;
        }
        l++, r--;
    }
    printf("YES");

    return 0;
}