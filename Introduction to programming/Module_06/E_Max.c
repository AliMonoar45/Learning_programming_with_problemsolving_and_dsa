#include <stdio.h>

int main() {
    int n,max_num= 0;
    scanf("%d", &n);
    for(int i = 1;i <=n;i++)
    {
        int check;
        scanf("%d", &check);
        if (check>max_num)
        {
            max_num = check;
        }
        
    }
    printf("%d", max_num);
    return 0;
}