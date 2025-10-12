#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 48 && ch <= 57)
    {
        printf("IS DIGIT");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("ALPHA\nIS SMALL");
    }

        // Another Method
    /*
     if (ch >= '0' && ch <= 9)
     {
         printf("IS DIGIT");
     }
     else
     {
         printf("ALPHA\n");
         if (ch >= 'a' && ch <= 'z')
         {
             printf("IS SMALL");
         }
         else
         {
             printf("IS CAPITAL");
         }
     }
     */

    return 0;
}