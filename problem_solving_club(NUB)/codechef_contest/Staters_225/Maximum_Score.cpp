#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &&i : a)
    {
        cin >> i;
    }
    int mn_dif = 2e5;
    int idx = -1;
    for (int i = 0; i < n;i++){
        cin >> b[i];
        if(mn_dif>(a[i]-b[i])){
            mn_dif = (a[i] - b[i]);
            idx = i;
        }
    }
    a[idx]=b[idx];
    cout << accumulate(a.begin(), a.end(),0)<<endl;

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