#include <stdio.h>
void pattern(int n)
{
    int sp = n - 1;
    int st = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= st; k++)
        {
            printf("*");
        }
        printf("\n");
        sp--;
        st += 2;
    }
    for (int i = n; i >= 0; i--)
    {
        for (int k = 0; k <= sp; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= st-2; j++)
        {

            printf("*");
        }

        printf("\n");
        st -= 2;
        sp++;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
    return 0;
}