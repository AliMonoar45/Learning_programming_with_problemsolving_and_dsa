#include <stdio.h>
int abs(int num){
    if (num<0)
        return -num;
    return num;
}
int main()
{
    int r = 5, c = 5;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int idx_r, idx_c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 1)
            {
                idx_r = i;
                idx_c = j;
            }
        }
    }
    int center_r = 2, center_call = 2;
    int step = abs(idx_r - center_r) + abs(idx_c - center_call);
    printf("%d", step);

    return 0;
}