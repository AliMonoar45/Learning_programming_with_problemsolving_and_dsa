#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
const int maxN = 30;
void solve()
{
    int n;
    cin >> n;
    vector<int> cnt(maxN);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        cnt[__lg(x)]++;
    }
    ll ans = 0;
    for (int i = 0; i < maxN; i++)
    {
        ans += (1LL * cnt[i] * (cnt[i] - 1)) / 2;
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}