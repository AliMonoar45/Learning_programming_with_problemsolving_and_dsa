#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int sum = a + b;
    int substrac = a - b;
    int multi = a * b;
    int devide = a / b;
    int rem = a % b;
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, substrac);
    printf("%d * %d = %d\n", a, b, multi);
    printf("%d / %d = %d\n", a, b, devide);
    printf("%d %% %d = %d\n", a, b, rem);

    return 0;
}