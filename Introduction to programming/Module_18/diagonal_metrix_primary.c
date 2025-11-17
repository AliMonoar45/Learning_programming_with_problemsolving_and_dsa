#include <stdio.h>
void input_matrix(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void primary_diagonal_check_one(int r, int c, int arr[r][c])
{
    int flag = 100;
    if (r == c)
    {
        // Square Matrix
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    // inside primary diagonal
                }
                else
                {
                    if (arr[i][j] == 0)
                    {
                    }
                    else
                    {
                        if (arr[i][j] != 0)
                        {
                            flag = 200;
                            printf("This is not a diagonal matrix.");
                        }
                    }
                }
            }
        }
        // check flag
        if (flag == 100)
        {
            printf("this is a primary diagonal matrix");
        }
    }
    else
    {
        // not square matrix so, not also diagonal matrix
        printf("This is not a diagonal matrix.");
    }
}
// primary diagonal without extra if's
void primary_diagonal_check_two(int r, int c, int arr[r][c])
{
    int flag = 100;
    if (r == c)
    {
        // Square Matrix
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j)
                {
                    if (arr[i][j] != 0)
                    {
                        flag = 200;
                        printf("This is not a diagonal matrix.");
                    }
                }
            }
        }
        // check flag
        if (flag == 100)
        {
            printf("this is a primary diagonal matrix");
        }
    }
    else
    {
        // not square matrix so, not also diagonal matrix
        printf("This is not a diagonal matrix.");
    }
}
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    input_matrix(r, c, arr);
    primary_diagonal_check_two(r, c, arr);
    return 0;
}