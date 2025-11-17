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
    int row = r - 1;
    for (int i = 0; i < c; i++)
    {
        // arr[r - 1][i];
        printf("%d ", arr[row][i]);
    }
    printf("\n");
    int column = c - 1;
    for (int i = 0; i < r; i++)
    {
        // arr[r - 1][i];
        printf("%d ", arr[i][column]);
    }
    return 0;
}