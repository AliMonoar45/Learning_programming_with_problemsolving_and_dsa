#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll tot = 0;
    for (auto &i : a)
    {
        cin >> i;
        tot += i;
    }

    ll root = sqrt(tot);
    if (root * root == tot)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
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
