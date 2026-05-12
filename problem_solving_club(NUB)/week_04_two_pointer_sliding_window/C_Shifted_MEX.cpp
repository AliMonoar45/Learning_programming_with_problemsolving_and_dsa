#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;
    sort(a.begin(),a.end());
    int ans = 0;
    for(auto &i: a){
        int next = 0;
        for (int j = 0;j<a.size();j++)
         {

             if (a[j]-i == next)
             next++;
         }
         ans = max(ans, next);
    }

    cout << ans << endl;
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