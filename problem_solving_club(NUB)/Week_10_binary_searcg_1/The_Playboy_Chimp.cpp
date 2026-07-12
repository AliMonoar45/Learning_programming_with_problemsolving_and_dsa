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
    int q;
    cin >> q;
    while (q--)
    {
        ll h;
        cin >> h;
        auto it_l = lower_bound(a.begin(), a.end(), h);
        if(it_l==a.begin())
            cout << "X ";
        else
            cout << *(it_l - 1) << " ";
        auto it_u = upper_bound(a.begin(), a.end(), h);
        if(it_u==a.end()){
            cout << "X\n";
        }else{
            cout << *it_u << nl;
        }
    }
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        solve();
    return 0;
}