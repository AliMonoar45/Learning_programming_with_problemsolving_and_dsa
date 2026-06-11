#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll l_of_r(ll r, ll s, ll m, ll k)
{
    if (r <= 0)
        return 0;
    if (r > s)
        r = s;
    ll runs = r * k;
    ll space = m - (r - 1);
    ll res = min(s, min(runs, space));
    if (res < 0)
        res = 0;
    if (res > m)
        res = m;
    return res;
}

void solve()
{
    int n;
    ll m, k;
    cin >> n >> m >> k;
    ll s = 0;
    for (int i = 0; i < n; ++i)
    {
        ll a;
        cin >> a;
        s += a;
    }

    if (k >= m)
    {
        cout << min(s, m) << '\n';
        return;
    }

    ll r0 = (m + 1) / (k + 1);
    vector<ll> cand = {1, r0, r0 + 1, min(s, m), s};
    sort(cand.begin(), cand.end());
    cand.erase(unique(cand.begin(), cand.end()), cand.end());

    ll ans = 0;
    for (ll r : cand)
        ans = max(ans, l_of_r(r, s, m, k));
    if (ans > m)
        ans = m;
    cout << ans << '\n';
    //ali monoar
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
