#include <stdio.h>
void pattern(int n)
{
    int sp = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
        sp--;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
    return 0;
}