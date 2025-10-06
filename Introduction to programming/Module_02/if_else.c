#include <stdio.h>

int main()
{
    int tk;
    printf("enter your taka\n");
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("pizza khabo");
    }
    else
    {
        printf("Kichu khabo na");
    }

    return 0;
}