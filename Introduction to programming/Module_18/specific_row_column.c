#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int specific_row;
    scanf("%d", &specific_row);
    for (int i = 0; i < c; i++)
    {
        printf("%d ", arr[specific_row][i]);
    }

    // int specific_column;
    // scanf("%d", &specific_column);
    // for (int i = 0; i < r; i++)
    // {
    //     printf("%d ", arr[i][specific_column]);
    // }

    return 0;
}