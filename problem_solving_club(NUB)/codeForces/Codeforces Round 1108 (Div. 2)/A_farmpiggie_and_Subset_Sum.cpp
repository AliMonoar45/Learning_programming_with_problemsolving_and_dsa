#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    // ali monoar
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 1; i <= n; i+=2)
    {
        ans.push_back(i + 1);
        ans.push_back(i);
    }
    for(auto i:ans)
        cout << i << " ";
    cout << nl;
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