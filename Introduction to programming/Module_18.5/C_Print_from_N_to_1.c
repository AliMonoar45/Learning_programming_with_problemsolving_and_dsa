#include <stdio.h>
void call_n(int i, int n)
{
    if (i == n)
    {
        return;
    }
    call_n(i + 1,n);
    printf("%d", i);
    if (i != 1)
    {
        printf(" ");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    call_n(1, n + 1);
    return 0;
}