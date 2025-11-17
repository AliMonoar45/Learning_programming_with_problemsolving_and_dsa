#include <stdio.h>
void hello(int i, int target)
{
    if (i == target+1)
    {
        return;
    }

    printf("%d\n", i);
    hello(i + 1,target);
}
int main()
{
    int i = 1;
    int target;
    scanf("%d", &target);
    hello(i, target);
    return 0;
}