#include <stdio.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("A and B equal");
    //         break;
    //     }
    //     else if (a[i] == '\n')
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if (b[i] < a[i])
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
        
    // }
    int val = strcmp(a, b);
    printf("%d", val);

    return 0;
}