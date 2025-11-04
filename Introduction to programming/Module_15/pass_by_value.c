#include <stdio.h>
void fun(int x){
    x = 20;
    printf("\ninside fun func %d, and address %p", x, &x);
}
int main()
{
    int x = 10;
    fun(x);
    printf("\ninside main func %d, and address %p", x, &x);
    return 0;
}