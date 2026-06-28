#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> ans(n+1);
    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            ans[x ].push_back(i );
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i].size();
        for(auto j:ans[i]){
            cout << " " << j;
        }
        cout << endl;
    }
    
    

    return 0;
}