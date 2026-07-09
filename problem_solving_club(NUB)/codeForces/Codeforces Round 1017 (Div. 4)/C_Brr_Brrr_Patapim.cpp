#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<vector<int>> a(n+1, vector<int>(n+1));
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cin >> a[i][j];
        }
        
    }
    vector<int> ans(2 * n + 1,0);
    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ans[i+j] = a[i][j];
        }
        
    }
    for (int i = 1; i <= n * 2;i++){
        if(find(ans.begin(), ans.end(), i)==ans.end()){
            cout << i << " ";
            break;
        }
    }
    for (int i = 2; i < ans.size();i++){
        cout << ans[i] << " ";
    }
        cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
    
    return 0;
}