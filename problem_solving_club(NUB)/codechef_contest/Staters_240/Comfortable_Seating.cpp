#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a){
        cin >> i;
    }
    int mn = *min_element(a.begin(), a.end());
    int cnt = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==mn)
            cnt++;
    }
    if(cnt>=2)
        cout << "Yes\n";
        else
            cout << "No\n";
            
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