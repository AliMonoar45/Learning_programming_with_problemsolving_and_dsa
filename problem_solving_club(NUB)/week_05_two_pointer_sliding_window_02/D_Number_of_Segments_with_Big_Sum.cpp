#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for(auto &i:a)
        cin >> i;
    ll l = 0, r = 0, sum = 0, ans = 0;
    while (r<n)
    {
        sum += a[r];
        if(sum>=s&&l<=r){
            
        
            while (sum >= s &&l<=r)
            {
                ans += n-r;
                sum -= a[l];
                l++;
            }
            
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}