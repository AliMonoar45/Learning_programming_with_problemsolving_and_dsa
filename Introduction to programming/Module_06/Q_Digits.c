#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        while (1)
        {
            int last = n % 10;
            printf("%d ", last);
            n = n / 10;
            if (n == 0)
            {
                break;
            }
        }
        //do
        // {
        //     printf("%d", n % 10);
        //     n /= 10;
        // }while (n != 0)
        printf("\n");
    }

    return 0;
}