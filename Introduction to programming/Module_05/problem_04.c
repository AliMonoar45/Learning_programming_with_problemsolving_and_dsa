#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    
    if (ch>96)
    {
        char CH = ch - 32;
        printf("%c", CH);
    }else{
        char CH = ch + 32;
        printf("%c", CH);
    }
    
    
    return 0;
}