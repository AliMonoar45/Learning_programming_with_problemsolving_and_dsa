#include <stdio.h>
long long int rest_num(long long int a, long long int b, long long int c)
{
    return a * b * c;
}
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        long long int multi, n1, n2, n3, n4;
        scanf("%lld %lld %lld %lld", &multi, &n1, &n2, &n3);
        if(multi!=0){
            long long int rest = rest_num(n1, n2, n3);

            if (multi % rest == 0)
            {
                n4 = multi / rest;
                printf("%lld\n", n4);
            }
            else
            {
                printf("%d\n", -1);
            }
        }else{
            printf("%d\n",0);
        }
        

        
    }

    return 0;
}