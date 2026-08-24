#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
int ans = 0;
int dfs(int node, vector<vector<int>> &adj, string &s)
{
    if (adj[node].size() == 0)
    {
        return s[node - 1] == 'W' ? 1 : -1;
    }
    int count = 0;
    for (auto &child : adj[node])
    {
        count += dfs(child, adj, s);
    }
    count += (s[node - 1] == 'W' ? 1 : -1);
    if (count == 0)
    {
        ans++;
    }
    return count;
}
void solve(){
    ans = 0;
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        adj[x].push_back(i + 2);
    }
    string s;
    cin >> s;
    dfs(1, adj, s);
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}