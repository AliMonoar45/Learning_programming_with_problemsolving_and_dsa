#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    // check if number is even or odd logic

    if (num1 % 2 == 0)
    {
        printf("num : %d is even", num1);
    }
    else
    {
        printf("num : %d is odd", num1);
    }

    return 0;
}