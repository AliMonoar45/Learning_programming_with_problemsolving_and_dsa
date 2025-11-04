#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int st = n;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= st; i++)
        {
            printf("*");
        }

        st--;
        printf("\n");
    }

    return 0;
}