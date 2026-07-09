#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (auto &i:a) {
        cin >> i;
        mp[i]++;
    }
    if(mp.size()>2){
        cout << "No\n";
        return;
    }
    if(mp.size()==2){
        vector<int> v;
        for(auto p:mp){
            v.push_back(p.second);
        }
        if(abs(v[0]-v[1])>1){
            cout << "No\n";
        }else{
            cout << "Yes\n";
        }
    }else
        cout << "Yes\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}