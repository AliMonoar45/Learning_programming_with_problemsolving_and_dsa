#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sp = n - 1,
        sym = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }

        if (i % 2 != 0)
        {
            for (int j = 1; j <= sym; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= sym; j++)
            {
                printf("-");
            }
        }

        printf("\n");
        sp--;
        sym += 2;
    }
    sp = 0;
     sym = sym-2;
     
     for (int i = 1; i <=n; i++)
     {
         for (int j = 1; j <= sp; j++)
         {
             printf(" ");
         }
         if (i % 2 != 0)
         {
             for (int j = 1; j <= sym; j++)
             {
                 printf("#");
             }
         }
         else
         {
             for (int j = 1; j <= sym; j++)
             {
                 printf("-");
             }
         }
         printf("\n");
         sp++;
         sym -= 2;
     }

    return 0;
}