#include <stdio.h>
long long int sum = 0;
void recursive_call(int arr[], int sz, int i)
{

    if (i == sz)
    {
        return;
    }

    sum += arr[i];
    recursive_call(arr, sz, i + 1);
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

    recursive_call(arr, sz, 0);
    printf("%lld", sum);

    return 0;
}