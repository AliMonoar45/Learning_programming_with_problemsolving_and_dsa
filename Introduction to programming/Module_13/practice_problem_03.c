#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n,
        sp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int i = 1; i <= sp; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= star; i++)
        {
            printf("*");
            
        }
        printf("\n");
        star--, sp++;
    }

    return 0;
}