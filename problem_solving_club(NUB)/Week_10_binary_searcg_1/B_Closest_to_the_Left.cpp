#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void cls_to_left()
{
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &&i : a)
    {
        cin >> i;
    }
    while (k--)
    {
        ll x;
        cin >> x;

        ll l = 0, r = a.size() - 1, mid;
        if (x < a[l])
        {
            cout << 0 << nl;
            continue;
        }

        ll ans;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (x >= a[mid])
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans + 1 << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cls_to_left();
    return 0;
}