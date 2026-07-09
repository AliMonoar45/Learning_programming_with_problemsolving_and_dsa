#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;

    int rem = m % n;
    if (rem == 0)
    {
        cout << 0 << nl;
    }
    else if (m < n)
    {
        cout << n - m << nl;
    }
    else
        cout << min(rem, n - rem) << nl;
}
int main()
{
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