// #include <stdio.h>

// long long int recursive_call(int arr[], int sz, int i)
// {

//     if (i == sz)
//     {
//         return 0;
//     }

//     return arr[i] + recursive_call(arr, sz, i + 1);
// }
// int main()
// {
//     int sz;
//     scanf("%d", &sz);
//     int arr[sz];
//     for (int i = 0; i < sz; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     long long int sum = recursive_call(arr, sz, 0);
//     printf("%lld", sum);

//     return 0;
// }

#include <stdio.h>

void recursive_call(int arr[], int sz, int i, long long int *sum)
{

    if (i == sz)
    {
        return;
    }

    *sum += arr[i];
    recursive_call(arr, sz, i + 1, sum);
}
int main()
{
    long long int sum = 0;
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }

    recursive_call(arr, sz, 0, &sum);
    printf("%lld", sum);

    return 0;
}