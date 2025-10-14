#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    while (t >= 1)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int sum_Of_Odd = 0;
        if (x < y)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 != 0)
                {
                    sum_Of_Odd += i;
                }
            }
            printf("%d\n", sum_Of_Odd);
        }
        else
        {
            for (int i = y + 1; i < x; i++)
            {
                if (i % 2 != 0)
                {
                    sum_Of_Odd += i;
                }
            }
            printf("%d\n", sum_Of_Odd);
        }
        t--;
    }

    return 0;
}