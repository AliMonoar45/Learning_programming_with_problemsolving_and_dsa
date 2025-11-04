#include <stdio.h>

int main()
{
    char c[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &c[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%c\n", c[i]);
    }
    return 0;
}