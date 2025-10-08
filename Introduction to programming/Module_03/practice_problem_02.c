#include <stdio.h>

int main()
{
    for (int i = 100 - 1; i > 0; i -= 2)
    {
        printf("%d\n", i);
    }

    printf("\n==while starts from here==\n");
    int j = 100;
    while (j > 0)
    {
        if (j % 2 != 0)
        {
            printf("%d\n", j);
        }
        j--;
    }

    return 0;
}