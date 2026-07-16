#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int s, k, m;
    cin >> s >> k >> m;
    if (k >= s)
    {
        cout << max(0, s - (m % k)) << '\n';
    }
    else
    {
        int p = m / k, q = m % k;
        if (p % 2 == 0)
        {
            cout << s - q << '\n';
        }
        else
        {
            cout << k - q << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    
    return 0;
}