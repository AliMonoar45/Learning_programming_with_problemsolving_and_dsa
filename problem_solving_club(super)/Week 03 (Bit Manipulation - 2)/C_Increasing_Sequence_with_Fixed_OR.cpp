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
    deque<ll> ans;
    for (ll k = 0; k <= __lg(n); k++)
    {
        if ((n >> k) & 1)
        {
            ll val = n - (1LL << k);
            if(val>0)
            ans.push_front(val);
        }
    }
    ans.push_back(n);
    cout << ans.size() << nl;
    for (auto i : ans)
        cout << i << " ";
    cout << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();
    return 0;
}