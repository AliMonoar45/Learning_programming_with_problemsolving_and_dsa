#include <stdio.h>
int count_before_one(int arr[], int sz)
{
    int count = 0;
    for (int i = 0; i <sz; i++)
    {   if (arr[i]==1)
    {
        break;
    }
    
        count++;
    }
    return count;
}
int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = count_before_one(arr, sz);
    printf("%d", count);

    return 0;
}