#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll x,ll y){
    return __gcd(x, y);
}
void solve(){
    long long b, c;
    cin >> b >> c;
    ll g = GCD(b, c);
    cout << c / g << endl;
    
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