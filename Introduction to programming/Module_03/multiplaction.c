#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a<0||b<0)
    {
       long long int negMul = a * b;
       printf("%lld", negMul);
    }else
    {
        unsigned long long int m = a * b;
        printf("%llu", m);
    }
    
    
    
    return 0;
}