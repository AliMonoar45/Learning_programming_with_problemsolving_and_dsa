#include <stdio.h>
void call_n(int n,int i){
    if (i==n+1)
    {
        return;
    }
    printf("%d\n", i);
    call_n(n, i + 1);
}
int main() {
    int n;
    scanf("%d", &n);
    call_n(n,1);
    return 0;
}