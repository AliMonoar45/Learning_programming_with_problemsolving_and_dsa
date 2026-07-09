#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll x = a[i];
        ll y_mn = l - x;
        ll y_mx = r - x;
        int left = lower_bound(a.begin() + i + 1, a.end(), y_mn) - a.begin();
        int right = upper_bound(a.begin() + i + 1, a.end(), y_mx) - a.begin() - 1;
        cnt += (right - left + 1);
    }
    cout << cnt << nl;
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