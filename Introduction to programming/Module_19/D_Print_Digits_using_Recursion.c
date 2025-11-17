// #include <stdio.h>
// void print_num(char str[], int i)
// {
//     if (str[i] == '\0')
//     {
//         return;
//     }
//     printf("%c ", str[i]);
//     print_num(str, i + 1);
// }
// int main()
// {
//     int tc;
//     scanf("%d", &tc);
//     while (tc--)
//     {
//         char str[100001];
//         scanf("%s", &str);
//         print_num(str, 0);
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
void print_digit(int num)
{
    if (num == 0)
    {
        return;
    }
    int digit = num % 10;
    num = num / 10;
    print_digit(num);
    printf("%d ", digit);
}
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        if (n==0)
        {
            printf("%d", 0);
            
        }
        
        print_digit(n);
        printf("\n");
    }

    return 0;
}