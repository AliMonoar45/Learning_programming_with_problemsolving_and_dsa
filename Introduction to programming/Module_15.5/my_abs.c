#include <stdio.h>
int my_abs(int n)
{
    if (n<0)
    {
        return -n;
    }
    return n;
}
int main()
{
    int x;
    scanf("%d", &x);
    int ab = my_abs(x);
    printf("%d", ab);
    return 0;
}