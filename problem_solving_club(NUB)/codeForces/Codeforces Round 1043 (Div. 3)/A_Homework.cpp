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
    string a, b, c;
    int n, m;
    cin >> n >> a;
    cin >> m >> b >> c;
    string ans = "";
    for (int i = 0; i < m; ++i)
    {
        if (c[i] == 'V')
        {
            ans += b[i];
        }
        else
        {
            a += b[i];
        }
    }
    // cout << ans << nl;
    reverse(ans.begin(), ans.end());
    cout << ans + a << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}