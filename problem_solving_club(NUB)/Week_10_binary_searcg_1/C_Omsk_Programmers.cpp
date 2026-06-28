#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    // ali monoar
    ll a, b, k;
    cin >> a >> b >> k;

    if (a == b)
    {
        cout << 0 << nl;
        return;
    }
    vector<ll> div_a, div_b;
    ll cur = a;
    while(true)
    {
        div_a.push_back(cur);
        if (cur == 0)
            break;
        cur /= k;
    }
    cur = b;
    while (true)
    {
        div_b.push_back(cur);
        if (cur == 0)
            break;
        cur /= k;
    }
    // for (auto &&i : div_a)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (auto &&i : div_b)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    ll ans = LLONG_MAX;
    for (int i = 0; i < div_a.size(); i++)
    {
        /* code */
        for (int j = 0; j < div_b.size(); j++)
        {
            /* code */
            ll op = i + j + (abs(div_a[i] - div_b[j]));
            ans = min(ans, op);
        }
    }
    cout << ans << nl;
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