#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n), b(n);
    for(auto &i:a)
        cin >> i;
    for(auto &i:b)
        cin >> i;

    ll sum_A = accumulate(a.begin(), a.end(), 0);
    ll sum_B = accumulate(b.begin(), b.end(), 0);

    bool isPossible = true;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<b[i]){
            isPossible = false;
            break;
        }
    }
    ll ans = sum_A - sum_B;
    if(isPossible){
        cout << ans << nl;
        return;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    isPossible = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            isPossible = false;
            break;
        }
    }
    if (isPossible)
    {
        cout << c+ans << nl;
        return;
    }
    cout << -1 << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}