#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll mx = 2e9;
    for (int i = 0; i < n-1; i++)
    {
        ll bob = max(a[i], a[i + 1]);
        mx = min(mx, bob);
    }
    cout << mx - 1 << nl;
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