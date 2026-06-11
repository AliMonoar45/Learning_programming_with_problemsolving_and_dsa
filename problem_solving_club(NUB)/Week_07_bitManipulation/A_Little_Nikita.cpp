#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    if(n>=m&& (n%2==m%2)){
        cout << "Yes\n";
    }else
        cout << "No\n";
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