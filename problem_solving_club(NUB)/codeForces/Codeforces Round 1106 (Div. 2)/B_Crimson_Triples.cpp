#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        ll x = n / i;
        ans += x * x;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}