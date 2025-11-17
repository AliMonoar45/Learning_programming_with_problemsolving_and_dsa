#include <stdio.h>
int count_vowels(char str[], int i)
{
    if (str[i] == '\0')
    {
        return 0;
    }

    int cnt = count_vowels(str, i + 1);

    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
        return cnt + 1;
    }

    return cnt;
}
int main()
{
    char str[201];
    fgets(str, 2001, stdin);
    // printf("%s", str);
    // int len = strlen(str);
    // printf("%d", str[len]);
    int vowels = count_vowels(str, 0);
    printf("%d", vowels);
    return 0;
}