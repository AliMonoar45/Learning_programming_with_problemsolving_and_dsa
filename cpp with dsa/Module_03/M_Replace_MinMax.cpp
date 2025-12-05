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
    int mn = INT_MAX, mn_idx,
        mx = INT_MIN, mx_idx;
    for (int i = 0; i < sz; i++)
    {
        mn = min(arr[i], mn);
        mx = max(arr[i], mx);
    }
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == mn)
        {

            mn_idx = i;
        }
        if (arr[i] == mx)
        {
            mx_idx = i;
        }
    }
    swap(arr[mn_idx], arr[mx_idx]);
    // cout << "min " << mn_idx << " mx " << mx_idx << endl;
    for (int i = 0; i < sz; i++)
    {
        cout<< arr[i]<<" ";
    }

    return 0;
}