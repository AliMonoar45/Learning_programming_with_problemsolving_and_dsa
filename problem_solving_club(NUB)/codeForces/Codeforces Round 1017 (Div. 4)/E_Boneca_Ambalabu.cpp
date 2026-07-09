#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i:a)
        cin >> i;
    ll ans=0;
    ll mx = *max_element(a.begin(), a.end());
    for(auto i:a){
        ans += (mx ^ i);
    }
    cout << mx << nl;
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