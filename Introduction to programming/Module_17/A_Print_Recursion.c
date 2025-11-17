#include <stdio.h>
void call_n(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    call_n(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    call_n(n);
    return 0;
}