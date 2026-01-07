#include <bits/stdc++.h>
using namespace std;
void rev_arr(int arr[],int n){
    int l = 0, r = n - 1;
    while (l<r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++, r--;
    }
    
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rev_arr(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    

    return 0;
}