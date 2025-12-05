#include <bits/stdc++.h>


using namespace std;

int main() {
    int sz;
    cin >> sz;
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, j=sz-1; i < j; i++,j--)
    {
        swap(arr[i], arr[j]);
    }
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    
    return 0;
}