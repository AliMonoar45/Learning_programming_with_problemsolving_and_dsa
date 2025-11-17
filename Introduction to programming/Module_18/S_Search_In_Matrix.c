#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int r = n, c = m;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int target;
    scanf("%d", &target);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            
            if (arr[i][j] == target)
            {
                printf("will not take number");
                return 0;
            }
        }
    }
    printf("will take number");

    return 0;
}