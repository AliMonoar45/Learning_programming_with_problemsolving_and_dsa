#include <stdio.h>
void odd_even()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    int even = 0, odd = 0;
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
for (int i = 0; i < sz; i++)
{
    if (arr[i]%2==0)
    {
        even++;
    }else{
        odd++;
    }
    
}printf("%d %d", even,odd);
}
int main()
{
    // int sz;
    // scanf("%d", &sz);
    // int arr[sz];
    odd_even();
    return 0;
}