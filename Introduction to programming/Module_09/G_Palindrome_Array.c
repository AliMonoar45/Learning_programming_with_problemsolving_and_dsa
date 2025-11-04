#include <stdio.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    int check_arr[sz];
    for (int i = 0; i < sz; i++)
    {
        check_arr[i] = arr[i];
    }
    int i = 0, j = sz - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    int check = 0;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] != check_arr[i])
        {
            check = 10;
            break;
        }
    }
    if (check == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}