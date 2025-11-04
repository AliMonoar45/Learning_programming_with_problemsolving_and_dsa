#include <stdio.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    int a[sz], b[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0,j=sz-1; i < sz,j>=0; i++,j--)
    {
        int sum=a[i] + b[j];
        printf("%d ", sum);
    }
    

    // for (int i = 0; i < sz; i++)
    // {
    //     printf("%d", a[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < sz; i++)
    // {
    //     printf("%d", b[i]);
    // }
    return 0;
}