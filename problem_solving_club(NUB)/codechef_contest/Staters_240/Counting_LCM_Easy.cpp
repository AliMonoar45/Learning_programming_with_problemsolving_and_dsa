#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll a, ll b)
{
    return __gcd(a, b);
}
ll LCM(ll a, ll b)
{
    return ((1LL * a / (GCD(a, b)) * b));
}
const vector<pair<int, int>> check;
/* for (int i = 0; i <=1e6+2; i++)
{
    make pair
} */

void solve()
{
    int z;
    cin >> z;
    ll ans = 0;
    for (int i = 1; i <= z; i++)
    {
        check lcm of pair
    }
    cout << ans << endl;
    // cout << "new" << endl;
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