#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;
    if(!is_sorted(a.begin(),a.end())){
        cout << 0 << nl;
        return;
    }
    int dif = INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
       if(a[i+1]==a[i]){
           cout << 1 << nl;
           return;
       }
       dif = min(dif,a[i + 1]- a[i]);
    }
    cout << dif / 2+1 << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
        solve();
    return 0;
}