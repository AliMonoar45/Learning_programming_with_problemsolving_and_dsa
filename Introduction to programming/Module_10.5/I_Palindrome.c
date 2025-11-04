#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s", &str);
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}