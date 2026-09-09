#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
const int maxN = 1e5 + 10;
vector<int> adj_list[maxN + 5];
vector<bool> vis(maxN + 5, false);
vector<int> total_child(maxN);
void dfs(int src)
{
    vis[src] = true;
    for (auto c : adj_list[src])
    {
        if (!vis[c])
        {

            dfs(c);
            total_child[src] += total_child[c];
        }
    }
    total_child[src] += 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    if (n % 2 != 0)
    {
        cout << -1;
        return 0;
    }
    dfs(1);
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        // cout << total_child[i] << " ";
        if (total_child[i] % 2 == 0)
            ans++;
    }
    cout << ans;

    return 0;
}