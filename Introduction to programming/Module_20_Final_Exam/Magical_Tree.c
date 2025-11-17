#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int row = (n + 11) / 2;
    int sp = row - 1;
    int str = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= str; k++)
        {
            printf("*");
        }

        printf("\n");
        sp--;
        str += 2;
    }
    for (int l = 1; l <= 5; l++)
    {
        for (int m = 1; m <= 5; m++)
        {
            printf(" ");
        }
        for (int o = 1; o <= n; o++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}