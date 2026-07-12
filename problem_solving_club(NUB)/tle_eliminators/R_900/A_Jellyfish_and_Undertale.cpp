#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    for(auto &i:v)
        cin >> i;

    ll ans = b;
    for (int i = 0; i < n; i++)
    {
        ans += min(v[i], a - 1);
    }
    cout << ans << nl;
}
int main() {
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