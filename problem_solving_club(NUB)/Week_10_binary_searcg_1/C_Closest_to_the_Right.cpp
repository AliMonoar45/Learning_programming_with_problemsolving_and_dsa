#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void cls_to_right()
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
        

        ll ans=n;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (x <= a[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cls_to_right();
    return 0;
}