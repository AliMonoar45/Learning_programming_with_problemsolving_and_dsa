#include <stdio.h>
int my_len(char str[])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char str[1001];
    scanf("%s", &str);
    int len = my_len(str);
    printf("%d", len);
    return 0;
}