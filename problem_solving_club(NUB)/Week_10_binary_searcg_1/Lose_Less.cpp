#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{ // ali monoar
    int m, n;
    cin >> m >> n;
    int ans;
    if (n <= m)
    {
        ans = m - n;
    }
    else
    {
        int dif = n - m;
        int x = (dif + 1) / 2;
        ans = m - n + 2 * x;
    }
    cout << ans << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    
    return 0;
}