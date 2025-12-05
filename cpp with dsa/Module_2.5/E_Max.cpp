#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sz;
    cin >> sz;
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }
    int mx = INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        // if (arr[i] > mx)
        // {

            mx = max(arr[i], mx);
        // }
    }
    cout << mx;

    return 0;
}