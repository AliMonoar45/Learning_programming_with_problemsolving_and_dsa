#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001],
        t[1001];
    scanf("%s", &s);
    scanf("%s", &t);
    int len_s = strlen(s);
    int len_t = strlen(t);
    int st_idx_t, en_idx_t;
    scanf("%d %d", &st_idx_t,&en_idx_t);
    // for (int i = 0; i <= len_t; i++)
    // {
    //     s[len_s + i] = t[st_idx_t + i];
    // }
    // for (int i = 0; s[i]!='\0'&&s[i]<=t[en_idx_t]; i++)
    // {
    //     printf("%c", s[i]);
    // }
    
    printf("%s", s);
    for (int i = st_idx_t; i <= en_idx_t&&t[i]!='\0'; i++)
    {
        printf("%c", t[i]);
    }
    

    
    return 0;
}