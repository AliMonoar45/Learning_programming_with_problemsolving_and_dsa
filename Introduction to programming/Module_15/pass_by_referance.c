#include <stdio.h>
void fun(int* p)
{
    *p = 20;
    printf("\ninside fun func %d, and address %p value of p %d", p, &p,*p);
}
int main()
{
    int x = 10;
    fun(&x);
    printf("\ninside main func %d, and address %p", x, &x);
    return 0;
}