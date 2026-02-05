#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 0; i < n + 1; i++)
            cin >> a[i];
        int mn=INT_MAX;
        for (int i = 0; i < n ;i++){
            int mx = max(a[i], a[i + 1]);
            mn = min(mn, mx);
        }
            cout <<mn<< endl;
    }
}
