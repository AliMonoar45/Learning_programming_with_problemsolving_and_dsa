#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mx = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        sum += a[i];
    }
    cout << max(sum, (2 * mx)) << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tc;
    // cin >> tc;
    // while (tc--)
    // {
        solve();
    // }
    
    return 0;
}