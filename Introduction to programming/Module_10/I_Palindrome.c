#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", &str);
    int start = 0,
        end = strlen(str) - 1;
    while (start < end)
    {
        if (str[start] != str[end])
        {
            printf("NO");
            return 0;
        }
        start++;
        end--;
    }
    printf("YES");

    return 0;
}