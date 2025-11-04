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
    int target;
    scanf("%d", &target);
    int flag = 0;
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("YES");
                printf("\n%d %d",arr[i],arr[j] );
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {

        printf("NO");
    }

    return 0;
}