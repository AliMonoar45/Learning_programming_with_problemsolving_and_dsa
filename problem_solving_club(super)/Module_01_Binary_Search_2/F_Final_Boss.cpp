#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n), c(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : c)
        cin >> i;

    // akhon lamda function

    auto ok = [&](ll mid)
    {
        ll dmg = 0;
        for (int i = 0; i < n; i++)
        { // damage jog hocche 1+ karon 1ta attack a sob aksathe tahole baki mid-1 / c[i] cool down time sathee attack gun
            dmg = min(dmg + (1 + (mid - 1) / c[i]) * a[i], h);
            if (dmg >= h)
                return true;
        }
        return dmg >= h;
    };

    // define range
    ll l = 0, r = 1e12;
    // apply binary search in difrent way
    while (l + 1 < r)
    {
        // to calculate inside range that dose not run out of boundary
        ll mid = l + (r - l) / 2;

        if (ok(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << nl;
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