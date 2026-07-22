#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;

    auto ok = [&](ll mid)
    {
        ll placed = 1;
        ll last = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] - last >= mid)
            {
                placed++;
                last = a[i];
            }
        }
        return placed >= k;
    };

    ll l = 0, r = 1e18, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << nl;

    return 0;
}
