#include <stdio.h>
#include <string.h>

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        char str[101];
        scanf("%s", &str);
        int sz = strlen(str);
        if (sz<=10)
        {
            printf("%s\n", str);
        }else{
            int bet = sz - 2;
            printf("%c%d%c\n", str[0],bet,str[sz-1]);
        }
        
    }
    
    return 0;
}