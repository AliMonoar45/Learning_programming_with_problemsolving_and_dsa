#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if (num > 0)
    {
        printf("number : %d is positive", num);
    }
    else if (num < 0)
    {
        printf("number : %d is negative", num);
    }
    else
    {
        printf("number : %d is zero", num);
    }

    return 0;
}