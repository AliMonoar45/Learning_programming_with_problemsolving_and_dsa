#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    n=n+1;
    vector<int> a(n);
    int mx = INT_MIN, mx2 = INT_MIN;
    for(auto &i:a){
        cin >> i;
        
    }
    int ans = INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
        int mx = max(a[i], a[i + 1]);
        ans = min(ans, mx);
    }
    if(n==2)
        cout << *max_element(a.begin(), a.end())<<endl;
    else
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