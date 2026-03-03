// idea of single source shortest distance is to track the level so in graph if we just track the single source then we can use level
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool is_visited[1005];
int level[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    is_visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        // kaj korte hobe

        // child push kora
        for (int child : adj_list[parent])
        {
            if(is_visited[child]==false){
                q.push(child);
                is_visited[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(is_visited, false, sizeof(is_visited));
    memset(level, -1, sizeof(level));

    int src, dist;
    cin >> src >> dist;

    bfs(src);
    cout << level[dist];

    return 0;
}