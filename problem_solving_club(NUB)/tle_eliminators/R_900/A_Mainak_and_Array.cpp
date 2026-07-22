#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<long long> a(n),b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    if (n == 1)
    {
        cout << 0 << '\n';
        return;
    }
    ll ans = a[n - 1] - a[0];
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, a[i] - a[0]);
    }
    for (int i = 0; i < n-1; i++)
    {
        ans = max(ans, a[n - 1] - a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        ans = max(ans, a[i] - a[i + 1]);
    }
    cout << ans << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}