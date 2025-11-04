#include <stdio.h>

int main()
{
    char s[10001];
    scanf("%s", &s);
    int count_fre[26] = {0};
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        count_fre[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count_fre[i] > 0)
        {
            printf("%c - %d\n", i + 'a', count_fre[i]);
        }
    }

    return 0;
}