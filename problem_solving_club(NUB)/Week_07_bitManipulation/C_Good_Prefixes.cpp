#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;

    long long sum = 0;
    int mx=0,ans=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        mx = max(mx, a[i]);
        if(sum-mx==mx)
            ans++;
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