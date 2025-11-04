#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        double a[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%lf", &a[i]);
        }
        
        double new_d = (a[2] * a[0]) / (a[0] + a[1]);
        // printf("%lf\n", new_d);
        double rem = a[2] - new_d;
        double extra = rem - (int)rem;
        // printf("%lf -> %lf\n", rem,extra);
        if (extra==0.00000)
        {
            printf("%d\n", (int)rem);
        }
        else{
            printf("%d\n", (int)rem+1);
        }
    }
    return 0;
}