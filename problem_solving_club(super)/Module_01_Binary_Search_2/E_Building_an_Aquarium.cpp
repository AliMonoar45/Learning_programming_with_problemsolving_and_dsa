#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
            mx = a[i];
    }
    auto ok = [&](ll mid)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mid > a[i])
            {
                sum += (mid - a[i]);
                if (sum > x)
                    return false;
            }
        }
        return sum <= x;
    };
    ll l = 0, r = 2e18, ans = 0, mid;
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
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}