#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    ll x, y, k;
    cin >> x >> y >> k;
    ll ans = 0;
    ll def = y - x;
    for (ll i = 0; i < k; i++)
    {
        if((x+i)>def){
            ll rem = k - i;
            ans += rem * def;
            break;
        }
        ans += (y + i) % (x + i);
    }
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}