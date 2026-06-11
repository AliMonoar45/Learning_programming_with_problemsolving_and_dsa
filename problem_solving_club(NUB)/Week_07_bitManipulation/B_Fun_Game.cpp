#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if (s == t || s[0] == '1')
    {
        cout << "YES\n";
        return;
    }
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        cout << "NO\n";
    }
    else
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                if (pos > i)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}