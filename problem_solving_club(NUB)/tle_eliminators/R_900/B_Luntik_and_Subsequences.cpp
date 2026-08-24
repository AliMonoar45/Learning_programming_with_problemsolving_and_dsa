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
    int cnt_1 = 0, cnt_0 = 0;
    for(auto &i:a){
        cin >> i;
        if(i==0){
            cnt_0++;
        }else if(i==1)
            cnt_1++;
    }
    ll ans = cnt_1 * pow(2, cnt_0);
    cout << ans << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}