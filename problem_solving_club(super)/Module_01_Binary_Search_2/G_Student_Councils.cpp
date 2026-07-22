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

    ll k, n;
    cin >> k >> n;

    vector<ll> a(n);
    ll sum = 0;
    for (auto &i : a)
    {
        cin >> i;
        sum += i;
    }
    auto ok = [&](ll mid)
    {
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total += min(a[i], mid);
        }
        return total >= mid * k;
    };
    ll l = 0,r = sum/k, ans = 0, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }else
        {
            r = mid - 1;
        }
    }
    cout << ans << nl;

    return 0;
}