#include <stdio.h>

int main() {
    int n = 10;
    //loop go to 1 to n but only print even numbers
    // for (int i = 1; i <= n;i++){
    //     if (i%2==0)
    //     {
    //         printf("%d\n", i);
    //     }
        
    // }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even\n", i);
        }
        else
        {
            printf("%d is odd\n", i);
        }
        
    }
        return 0;
}