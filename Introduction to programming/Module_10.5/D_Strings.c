#include <stdio.h>
#include <string.h>

int main()
{
    char A[11], B[11];
    scanf("%s %s", &A, &B);
    printf("%d %d\n", strlen(A), strlen(B));
    printf("%s%s\n", A, B);
    printf("%c", B[0]);
    for (int i = 1; i < strlen(A); i++)
    {
        printf("%c", A[i]);
    }

    printf(" %c", A[0]);
    for (int i = 1; i < strlen(B); i++)
    {
        printf("%c", B[i]);
    }

    return 0;
}