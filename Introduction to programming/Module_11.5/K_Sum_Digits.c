#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char arr[n + 1];

    scanf("%s", &arr);

    int len = strlen(arr);
    int t[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        t[i] = arr[i]-'0';
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += t[i];
    }
    printf("%lld", sum);

    return 0;
}