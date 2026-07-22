#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 1 || n < 4)
    {
        cout << -1 << nl;
        return;
    }
    ll mn, mx;
    
    if (n % 6 == 0)
        mn = n / 6;
    else
        mn = n / 6 + 1;
    
    mx = n / 4;
    cout << mn << " " << mx << nl;
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
