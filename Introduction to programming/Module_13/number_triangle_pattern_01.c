#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int str = 1,
        space = n - 1;
    // total lines
    for (int i = 0; i < n; i++)
    {
        // single line
        for (int j = 1; j <= space; j++) // space print
        {
            printf(" ");
        }

        for (int j = 1; j <= str; j++) // star print
        {
            printf("%d ",j);
        }

        printf("\n");
        str++;
        space--;
    }

    return 0;
}