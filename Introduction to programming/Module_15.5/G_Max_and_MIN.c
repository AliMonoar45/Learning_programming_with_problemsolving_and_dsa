#include <stdio.h>
int max_of_arr(int arr[], int n)
{
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int min_of_arr(int arr[], int n)
{
    int mini = 1000000;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}
void input_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void output_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    input_arr(arr, n);
    int maxi = max_of_arr(arr, n);
    int mini = min_of_arr(arr, n);
    printf("%d %d", mini, maxi);
    return 0;
}