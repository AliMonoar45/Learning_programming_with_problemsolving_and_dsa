#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1,
        sp = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = sp; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("* ");
        }
        printf("\n");
        star++;
        sp--;
    }

    return 0;
}