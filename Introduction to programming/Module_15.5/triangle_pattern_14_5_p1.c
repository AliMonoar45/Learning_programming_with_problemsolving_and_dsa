#include <stdio.h>

void print_pattern(int n)
{
    int sp = n - 1;
    int st = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= st; j++)
        {
            printf("*");
        }
        sp--;
        st++;
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