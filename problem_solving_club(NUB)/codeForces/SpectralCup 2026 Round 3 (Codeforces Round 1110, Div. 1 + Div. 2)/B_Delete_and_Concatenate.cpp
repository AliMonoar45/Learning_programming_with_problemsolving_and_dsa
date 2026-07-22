#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve(){
    // ali monoar
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for(auto &i:a)
        cin >> i;
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i] - c;
    }
    ll x = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n/2; i++)
    {
        ll d = c - a[i];
        if(d>0){
            x += d;
        }
    }
    
    cout << s+x << nl;
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