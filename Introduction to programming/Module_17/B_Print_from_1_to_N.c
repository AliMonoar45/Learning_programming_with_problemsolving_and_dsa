#include <stdio.h>
void call_n(int i,int target){
    if (i==target+1)
    {
        return;
    }
    printf("%d\n", i);
    call_n(i + 1, target);
}
int main() {
    int n,i=1;
    scanf("%d", &n);
    call_n(i,n);
    return 0;
}