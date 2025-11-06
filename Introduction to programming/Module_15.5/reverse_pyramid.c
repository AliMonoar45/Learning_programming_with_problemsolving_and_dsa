#include <stdio.h>
void print_pattern(int n)
{
    int st = (2 * n) - 1,
        sp = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < sp; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= st; j++)
        {
            printf("*");
        }

        sp++;
        st -= 2;
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}