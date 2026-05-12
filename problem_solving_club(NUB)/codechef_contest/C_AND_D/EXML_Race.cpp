#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> ans;
    for (int i = 1; i <= n;i++){
        int s, t;
        cin >> s >> t;
        ans.push_back({s / t, i});
    }
    sort(ans.begin(), ans.end());

    int mx = ans.back().first;

    int best = INT_MAX;
    for(auto i:ans){
        if(i.first==mx){
            best = min(best, i.second);
        }
    }
    cout << best << endl;
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