#include <stdio.h>
#include <limits.h>

int main()
{
    int s;
    scanf("%d", &s);
    int ar[s];
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &ar[i]);
    }
    int mx = INT_MIN;
    for (int i = 0; i < s; i++)
    {
        if (mx < ar[i])
        {
            mx = ar[i];
        }
    }

    for (int i = 0; i < s; i++)
    {
        printf("%d ", mx - ar[i]);
    }

    return 0;
}