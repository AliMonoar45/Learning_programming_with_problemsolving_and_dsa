#include <stdio.h>
void pattern_odd(int n){
    int str = 1,
        space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int j = 1; j <= str; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= str; j++)
            {
                printf("-");
            }
        }

        printf("\n");
        str += 2;
        space--;
    }
    int sp = 1;
    int st = str - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 0; i < sp; i++)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {
            for (int i = st - 2; i > 0; i--)
            {
                printf("#");
            }
        }
        else
        {

            for (int i = st - 2; i > 0; i--)
            {
                printf("-");
            }
        }
        printf("\n");
        st -= 2;
        sp++;
    }
}
void pattern_even(int n){
    int str = 1,
        space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int j = 1; j <= str; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= str; j++)
            {
                printf("-");
            }
        }

        printf("\n");
        str += 2;
        space--;
    }
    int sp = 1;
    int st = str - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 0; i < sp; i++)
        {
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int i = st - 2; i > 0; i--)
            {
                printf("#");
            }
        }
        else
        {

            for (int i = st - 2; i > 0; i--)
            {
                printf("-");
            }
        }
        printf("\n");
        st -= 2;
        sp++;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n%2!=0)
    {
        pattern_odd(n);
    }else{
        pattern_even(n);
    }
    

    return 0;
}