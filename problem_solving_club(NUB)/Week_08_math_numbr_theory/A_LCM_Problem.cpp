#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll l, r;
    cin >> l >> r;
    if ((2 * l) > r)
    {
        cout << -1 << " " << -1 << endl;
    }
    else
    {
        cout << l << " " << 2 * l << endl;
    }
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