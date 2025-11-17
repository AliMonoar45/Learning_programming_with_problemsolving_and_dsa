#include <stdio.h>
void sort_arr(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz ; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
long long int summation(int arr[], int sz, int tar)
{
    long long int sum = 0;
    for (int i = sz - tar; i < sz; i++)
    {   if(arr[i]>0)
        sum += arr[i];
        // printf("%d ", arr[i]);
    }
    if (sum<0)
    {
        return 0;
    }
    
    return sum;
}
int main()
{
    int sz, target;
    scanf("%d %d", &sz, &target);
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort_arr(arr, sz);
    long long int sum = summation(arr, sz, target);
    // for (int i = 0; i < sz; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    printf("%lld", sum);

    return 0;
}