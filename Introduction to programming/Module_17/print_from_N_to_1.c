#include <stdio.h>
void call_n(int n){
    if (n==0) // end condition
    {
        return;
    }
    
 printf("%d\n", n);
 call_n(n - 1); // increment/decrement
}
int main() {
    int n;
    scanf("%d", &n);
    call_n(n); // initialization
    return 0;
}