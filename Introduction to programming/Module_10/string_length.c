#include <stdio.h>
#include<string.h>
int main()
{
    char str[5] = "ali";
    // scanf("%s", &str);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("using counter = %d\n", count);
    int sz = strlen(str);
    printf("using string length = %d", sz);
    return 0;
}