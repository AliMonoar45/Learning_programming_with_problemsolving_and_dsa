#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

// need help
ll LCM(ll x, ll y)
{
    return lcm(x, y);
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll zero = 0;
    bool all_ons = true;
    ll l = 1;
    for (auto &i : a)
    {

        cin >> i;
        if(i==0)
            zero++;
        if(i!=1)
            all_ons = false;
        l=LCM(l,i);    }
    if(zero>0){
        cout << -1 << nl;
        return;
    }
    if(all_ons){
        cout << 2 << nl;
        return;
    }
    ll mx = *max_element(a.begin(), a.end());
    ll ans = LONG_LONG_MAX;
    for (int i = 0; i < n; i++)
    {
        ll num = a[i];
        for (ll j = 2; j <= 53; j++)
        {
            if (__gcd(num, j) == 1)
            {
                ans = min(ans, j);
            }
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