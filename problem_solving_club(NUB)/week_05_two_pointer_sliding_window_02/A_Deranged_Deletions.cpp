#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;

    vector<int> cpy;
    cpy = a;
    sort(cpy.begin(), cpy.end());
    vector<int> ans;
    for (int i = 0; i < n;i++){
        if(a[i]!=cpy[i])
            ans.push_back(a[i]);
    }
    if(ans.size()==0)
        cout << "NO\n";
        else{
            cout<<"YES\n";
            cout << ans.size() << endl;
            for(auto i:ans){
                cout << i << " ";
            }
            cout << endl;
        }
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