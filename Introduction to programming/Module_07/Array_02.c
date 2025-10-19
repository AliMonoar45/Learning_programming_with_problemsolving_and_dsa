#include <stdio.h>

int main()
{   
    //Array initialization 
    int arr[10];
    // array input
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    //array output
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}