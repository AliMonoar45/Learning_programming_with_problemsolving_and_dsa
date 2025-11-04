#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sp = 0,
    str=9;
    for (int i = 0; i < n; i++)
    {
        for (int i = 1; i <= sp; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= str; i++)
        {
            printf("*");
        }
        
        
        printf("\n");
        sp++,
        str-=2;
    }

    return 0;
}
