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
    sort(arr, arr + sz);
    
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + sz, greater<int>());
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}