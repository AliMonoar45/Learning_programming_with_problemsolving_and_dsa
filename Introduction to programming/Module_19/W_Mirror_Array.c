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
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0,k=c-1; j < k; j++,k--)
    //     {
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[i][k];
    //         arr[i][k] = temp;
    //         // printf("%d\n",arr[i][j] );
    //         // printf("k==%d\n",arr[i][k] );
    //     }
        
    // }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = c-1; j >=0; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}