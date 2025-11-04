#include <stdio.h>

int main()
{
    int s;
    scanf("%d", &s);
    int ar[s];
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &ar[i]);
    }
    int idx;
    scanf("%d", &idx);
    idx = idx - 1;

    if (ar[idx] == 1)
    {
        ar[idx] = 0;
    }
    else
    {
        ar[idx] = 1;
    }

    for (int i = 0; i < s; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}