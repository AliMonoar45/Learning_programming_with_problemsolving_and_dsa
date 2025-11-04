#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        char s[10001];
        scanf("%s", &s);
        int c_small = 0;
        int c_capital = 0;
        int c_digit = 0;

        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                c_digit++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                c_small++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                c_capital++;
            }
        }
        printf("%d %d %d\n", c_capital, c_small, c_digit);
    }
    return 0;
}