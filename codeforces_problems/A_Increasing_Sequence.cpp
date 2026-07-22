#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, d;
    cin >> n >> d;

    vector<ll> a(n);
    for (auto &i:a)
        cin >> i;
    ll op = 0;
    for (int i = 1; i < n; i++) //O(n)
    {
        if(a[i-1]>=a[i]){ // o(1)
            ll diff = a[i - 1] - a[i];
            ll k = diff / d + 1; 
            a[i] += k * d;
            op += k;
        }
    }
    cout << op << nl;

    return 0;
}