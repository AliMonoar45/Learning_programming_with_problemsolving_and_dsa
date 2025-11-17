#include <stdio.h>
#include <stdbool.h>
bool primary_diagonal(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
bool secondary_diagonal(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i + j == r - 1)
            {
                if (arr[i][j] != 1)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
bool zeros_in_arr(int r, int c, int arr[r][c])
{
    int one;
    if (r % 2 == 0)
    {
        one = r * 2;
    }

    else{
     one = r + c - 1;
    }
        
    int count_zero = 0, must_have_zero = (r * c) - one;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 0)
            {
                count_zero++;
            }
        }
    }
    if (count_zero == must_have_zero)
    {
        return true;
    }
    else
    {
        return false;
    }
}
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

    if (r != c)
    {
        printf("NO");
        return 0;
    }
    bool p_dia = primary_diagonal(r, c, arr),
         s_dia = secondary_diagonal(r, c, arr),
         z_os = zeros_in_arr(r, c, arr);
    if (p_dia && s_dia && z_os)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    

    return 0;
}