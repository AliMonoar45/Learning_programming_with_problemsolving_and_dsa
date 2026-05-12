#include <bits/stdc++.h>
using namespace std;

bool has_odd(int n)
{
    string s = to_string(n);
    for (char c : s)
    {
        int d = c - '0';
        if (d % 2 != 0)
            return true;
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << 0 << "\n";
        return;
    }
    else if (has_odd(n))
    {
        cout << 1 << "\n";
        return;
    }
    else
    {
        int ans = (n >= 10 ? 3 : -1);
        string s = to_string(n);
        for (char c : s)
        {
            int d = c - '0';
            if (has_odd(n - d))
            {
                ans = 2;
                break;
            }
        }
        cout << ans << "\n";
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
