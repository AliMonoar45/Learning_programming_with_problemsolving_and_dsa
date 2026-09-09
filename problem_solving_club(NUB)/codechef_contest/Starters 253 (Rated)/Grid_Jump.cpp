#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int a, b, p, q, r;
    cin >> a >> b >> p >> q >> r;
    int ans = INT_MAX;
    int k = min(a, b);
    for (int i = 0; i <= k; i++)
    {
        int r_a = a - i;
        int r_b = b - i;

        int c = i * r + (((r_a + 1) / 2) * p) + (((r_b + 1) / 2) * q);

        ans = min(ans, c);
    }
    cout << ans << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}