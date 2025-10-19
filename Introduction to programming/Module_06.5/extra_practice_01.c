#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int j = 1;
    while (j<=n)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
        j++;
    }

    return 0;
}