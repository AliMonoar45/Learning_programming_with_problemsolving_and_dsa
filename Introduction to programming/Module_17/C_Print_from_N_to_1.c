#include <stdio.h>
void call_n(int i, int target)
{
    if (i == target + 1)
    {
        return;
    }
    call_n(i + 1, target);
    printf("%d", i);
    // without this part. can i print space but not for the last 1
    if (i != 1)
    {
        printf(" ");
    }
}
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    call_n(i, n);
    return 0;
}