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
            printf("*");
        }

        printf("\n");
        str += 2;
        space--;
    }

    // reverse pyramid
    int sp = 1;
    int st = str-2;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < sp; i++)
        {
            printf(" ");
        }
        for (int i = st-2; i > 0; i--)
        {
            printf("*");
        }
        printf("\n");
        st -= 2;
        sp++;
    }
    

    return 0;
}