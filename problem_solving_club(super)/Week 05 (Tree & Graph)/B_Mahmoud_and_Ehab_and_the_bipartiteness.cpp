#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

const ll maxN = 1e5 + 10;

vector<ll> adj_list[maxN];

vector<ll> level(maxN,0), color(maxN,0);
vector<bool> visited(maxN, false);
void dfs(ll src){
    visited[src] = true;
    
    for(auto c:adj_list[src]){
        if(!visited[c]){
            level[c] = level[src] + 1;
            color[c] = (color[src] ^ 1);
            dfs(c);
        }
    }
}
void bfs(ll src){
    queue<ll> q;
    vector<bool> vis(maxN, false);
    q.push(src);
    vis[src] = true;
    
    level[src] = 0;
    color[src] = 0;

    while(!q.empty()){
        ll p = q.front();
        q.pop();
        for(auto c:adj_list[p]){
            if(vis[c]==false){
                q.push(c);
                vis[c] = true;
                // next line should be change
                level[c] = level[p]+1;
                color[c] = (color[p] ^ 1);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    for (ll i = 0; i < n-1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    // for (int i = 1; i <= n;i++){
    //     cout << i << " -> ";
    //     for(auto x:adj_list[i]){
    //         cout << x << " ";
    //     }
    //     cout << nl;
    // }
    // cout << nl;

    // bfs(1);

    dfs(1);
    // for (int i = 1; i < n; i++)
    // {
    //     cout << color[i] << " -> " << level[i] << nl;
    // }
    ll cnt = 0;
    ll one = count(color.begin(), color.begin()+n+1, 1);
    for (int i = 1; i <= n;i++){
        if(color[i]==0){
            // cerr << color[i] << "  " << i<<" -> "<<adj_list[i].size()<<" = "<<"one"<<nl;

            cnt += one - adj_list[i].size();
        }
    }
    // if(cnt<0)
    //     cout << 0 << nl;
    //     else
    cout << cnt << endl;
    return 0;
}