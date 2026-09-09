#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
ll ans1 = 0;

void dfs(int i, int j, int n, int m, vector<vector<int>> &g, vector<vector<int>> &vis)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return;
    if (vis[i][j] == 1)
        return;
    if (g[i][j] == 0)
        return;
    vis[i][j] = 1;
    ans1 += g[i][j];

    dfs(i - 1, j, n, m, g, vis);
    dfs(i + 1, j, n, m, g, vis);
    dfs(i, j - 1, n, m, g, vis);
    dfs(i, j + 1, n, m, g, vis);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector g(n, vector<int>(m));
    vector vis(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j])
                continue;
            ans1 = 0;
            dfs(i, j, n, m, g, vis);
            ans = max(ans, ans1);
        }
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