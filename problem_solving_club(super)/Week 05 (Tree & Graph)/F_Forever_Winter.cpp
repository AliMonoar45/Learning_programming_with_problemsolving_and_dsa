#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    map<int, set<int>> g;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].insert(v);
        g[v].insert(u);
    }
    int leaf = -1,parentOfLeaf=-1;
    for (int i = 1; i <= n; i++)
    {
        if(g[i].size()==1){
            leaf = i;
            break;
        }
    }
    int x, y;
   
    for (int i = 1; i <= n; i++)
    {
        if(g[i].find(leaf)!=g[i].end()){
            y = g[i].size() - 1;
            parentOfLeaf = i;
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (g[i].find(parentOfLeaf) != g[i].end()&&g[i].size()>1)
        {
            x = g[i].size();
            
            break;
        }
    }

    cout << x << " " << y << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}