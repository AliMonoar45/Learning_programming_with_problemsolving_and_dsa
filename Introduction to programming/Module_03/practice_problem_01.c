#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 8; i <=200; i+=8)
    {
        printf("%d\n",i );
    }
printf("while starts from here\n");
    int i = 8;
    while (i<=200)
    {
        printf("%d\n", i);
        i += 8;
    }
    

    return 0;
}