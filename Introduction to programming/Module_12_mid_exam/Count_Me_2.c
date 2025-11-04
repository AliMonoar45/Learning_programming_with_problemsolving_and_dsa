#include <stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    scanf("%s", &s);
    int len = strlen(s);
    int c = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u')
        {
            c++;
        }
    }
    printf("%d", c);

    return 0;
}