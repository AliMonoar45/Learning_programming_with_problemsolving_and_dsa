#include <stdio.h>
void min_max_mid(int a, int b, int c)
{
    int mx = a, md = a, mn = a;
    
    if (b > mx)
    {
        mx = b;
    }
    if (c > mx)
    {
        mx = c;
    }
    if (b < mn)
    {
        mn = b;
    }
    if (c < mn)
    {
        mn = c;
    }
    md = (a + b + c) - (mn + mx);
    printf("%d\n%d\n%d\n", mn, md, mx);
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    min_max_mid(a, b, c);
    printf("\n%d\n%d\n%d", a, b, c);
    return 0;
}