/* #include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x, y;
    cin >> n >> x >> y;
    n--;

    auto ok = [&](ll mid)
    {
        ll cp1 = mid / x;
        ll cp2 = mid / y;
        ll total = cp1 + cp2;
        return total >= n;
    };

    ll l = 1, r = n * min(x, y), mid, ans = 0;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    ll fc = min(x, y);
    cout << ans + fc;

    return 0;
} */
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x, y;
    cin >> n >> x >> y;
    n--;

    auto ok = [&](ll mid)
    {
        ll cp1 = mid / x;
        ll cp2 = mid / y;
        ll total = cp1 + cp2;
        return total >= n;
    };

    ll l = 0, r = (ll)2e8 * 10, mid, ans = 0;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    ll fc = min(x, y);
    cout << ans + fc;

    return 0;
}