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
    for (int i = 0; i < sz; i++)
    {
        if (arr[i]!=0)
        {
            cout << arr[i] << " ";
        }
        
    }
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}