# Take input in graph

first node number 
second edge number / connection

n e
0 3
0 2

if it is undirected graph then we can go from 0 - 3
also 3 - 0 
but if it is directed then just can go 0 - 3

## there are 3 ways to take input in graph and store data

1. Adjacency Matrix
2. Adjacency List
3. Edge List
   
*Normally nodes just can be 0 to n-1 but if not then it will mentioned*

### Adjacency Matrix

```cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];

    memset(adj_mat, 0, sizeof(adj_mat));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adj_mat[i][j] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```
Input :
```
5 5
0 1
0 2
3 0
1 3
3 4
```
Output :
```
1 1 1 1 0 
1 1 0 1 0 
1 0 1 0 0 
1 1 0 1 1 
0 0 0 1 1 
```
### Adjacency List
```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (auto val: adj_list[i])
        {
            cout << val << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}
```
input:
```
5 5
0 1
0 2
3 0
1 3
3 4
```
Output:
```
0 -> 1 2 3 
1 -> 0 3 
2 -> 0 
3 -> 0 1 4 
4 -> 3 
```

### Edge List:

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edge_list;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b});
    }

    for (pair<int, int> p : edge_list)
        cout << p.first << " " << p.second << endl;

    return 0;
}
```
input:
```
5 5
0 1
0 2
3 0
1 3
3 4

```
output:
```
0 1
0 2
3 0
1 3
3 4

```
## Summary of Representations
- Adjacency Matrix: Dense graphs, quick edge lookup.

- Adjacency List: Sparse graphs, efficient traversal.

- Edge List: Simple, useful for edge-based algorithms like Kruskal’s MST.