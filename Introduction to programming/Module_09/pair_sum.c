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
        int arr[sz];
        for (int i = 0; i < sz; i++)
        {
            scanf("%d", &arr[i]);
        }
        long long int mn_sum = INT_MAX;
        for (int i = 0; i < sz; i++)
        {
            for (int j = i + 1; j < sz; j++)
            {
                long long int sum = arr[i] + arr[j] + j - i;
                if (sum < mn_sum)
                {
                    mn_sum = sum;
                }
            }
        }
        printf("%d\n", mn_sum);
    }

    return 0;
}