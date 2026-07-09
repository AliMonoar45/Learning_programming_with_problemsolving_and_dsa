#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = 0, cnt = 0;
    for(auto &i:a){
        cin >> i;
        if(i==1){
            cnt = 0;
        }else{
            cnt++;
            ans = max(cnt, ans);
        }

    }
    cout << max(ans, cnt) << nl;
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