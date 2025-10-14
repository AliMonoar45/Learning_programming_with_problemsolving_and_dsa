#include <stdio.h>

int main() {
    int x = 10;
    int y = x++;
    int z = ++y;
    printf("%d", z++);
    int a = 10;
    ++a;
    printf("\n%d", ++a);
    return 0;
}