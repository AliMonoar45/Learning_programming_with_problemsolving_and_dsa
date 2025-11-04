#include <stdio.h>
#include <limits.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int sz;
        scanf("%d", &sz);
        int arr[sz+1];
        for (int i = 1; i <= sz; i++)
        {
            scanf("%d", &arr[i]);
        }
        long long int mn = INT_MAX;
        for (int i = 1; i <= sz; i++)
        {
            for (int j = i + 1; j <= sz; j++)
            {
                long long int sum = arr[i] + arr[j] + j - i;
                if (sum < mn)
                {
                    mn = sum;
                }
            }
        }
        
        printf("%lld\n", mn);
    }
    return 0;
}