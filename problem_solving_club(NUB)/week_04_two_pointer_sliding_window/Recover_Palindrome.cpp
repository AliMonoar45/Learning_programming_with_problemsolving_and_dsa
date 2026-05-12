#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n / 2 != 0 && s[n / 2 + 1] == '?')
    {
        cout << "NO\n";
        return;
    }
    // check mirror position
    for (int i = 1; i < n / 2+1; i++)
    {
        if (s[i] == '?' && s[n - i - 1] == '?')
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
