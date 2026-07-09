#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    bool flag = false;
    for (auto &i:a){
        cin >> i;
        if(k==i){
            flag = true;
        }
    }
    if(flag) cout<<"YES\n";
    else
        cout << "NO\n";
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