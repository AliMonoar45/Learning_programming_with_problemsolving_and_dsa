#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101],
        c[101], d[101];
    scanf("%s %s", &a, &b);
    scanf("%s %s", &c, &d);
    printf("%s %s\n", a, b);
    printf("%s %s\n", c, d);

    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }
    // a[strlen(b)] = '\0';
    printf("%s %s\n", a, b);
    strcpy(c, d);
    printf("%s %s\n", c, d);

    return 0;
}