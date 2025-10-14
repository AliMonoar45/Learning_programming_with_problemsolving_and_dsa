#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'z')
    {
        printf("a");
    }
    else if (ch >= 'a' && ch < 'z')
    {
        ch += 1;
        printf("%c", ch);
    }

    return 0;
}