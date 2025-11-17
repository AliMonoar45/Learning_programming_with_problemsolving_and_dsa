#include <stdio.h>
void fun2()
{
    printf("gallo\n");
}
void fun1()
{
    printf("willo\n");
    fun2();
}
void fun()
{
    printf("mello\n");
    fun1();
}
int main()
{
    printf("hello\n");
    fun();
    return 0;
}