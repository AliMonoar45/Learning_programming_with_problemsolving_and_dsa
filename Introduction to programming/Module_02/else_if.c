#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("pizza khabo");
    }
    else if (tk >= 50)
    {
        printf("futchka khabo");
    }
    else if (tk >= 20)
    {
        printf("chips khabo");
    }
    else
    {
        printf("kicchu khabona");
    }

    return 0;
}