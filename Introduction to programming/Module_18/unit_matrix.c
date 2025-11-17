#include <stdio.h>
#include <stdbool.h>
void matrix_input(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void matrix_print(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
bool is_unit(int r, int c, int arr[r][c])
{
    if (r != c)
    {
        return false;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                // primary diagonal
                if (arr[i][j] != 1)
                {
                    return false;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {

                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    matrix_input(r, c, arr);
    // matrix_print(r, c, arr);
    if (is_unit(r, c, arr))
    {
        printf("This is a unit matrix");
    }
    else
    {
        printf("This is NOT a unit matrix");
    }

    return 0;
}