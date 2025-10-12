#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int lastDegit = num / 1000;
    if (lastDegit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}