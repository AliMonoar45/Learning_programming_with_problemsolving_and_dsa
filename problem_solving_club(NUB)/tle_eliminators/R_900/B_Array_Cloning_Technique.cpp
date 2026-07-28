#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll mx_freq = 0;
    for(auto i:mp){
        mx_freq = max(mx_freq, i.second);
    }

    ll op = 0;
    while (mx_freq<n)
    {
        op++; // for swap
        if(mx_freq*2<=n){
            op += mx_freq;
            mx_freq *= 2;
        }else{
            // kom
            op += (n - mx_freq);
            mx_freq = n;
        }
    }
    cout << op << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}