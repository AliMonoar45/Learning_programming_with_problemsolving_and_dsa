#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // fre_count zone
    // why can not do this like int freq[m+1]={0};
    int freq[m+1];
    for (int i = 0; i <= m; i++)
    {
        freq[i] = 0;
    }
    

    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        freq[val]++;
    }
    for (int i = 1; i < m+1; i++)
    {
        printf("%d\n", freq[i]);
    }

    return 0;
}