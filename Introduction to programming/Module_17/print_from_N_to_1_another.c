#include <stdio.h>
void hello(int i, int target)
{
    if (i == target + 1)
    {
        return;
    }

    hello(i + 1, target);
    printf("%d\n", i);
}
int main()
{
    int i = 1;
    int target;
    scanf("%d", &target);
    hello(i, target);
    return 0;
}