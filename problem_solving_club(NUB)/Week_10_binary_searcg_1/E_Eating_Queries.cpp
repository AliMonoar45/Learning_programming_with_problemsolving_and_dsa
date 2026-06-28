#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n,q;
    cin >> n>>q;
    vector<int> a(n),prefix(n+1);
    for(auto &i:a)
        cin >> i;
    sort(a.rbegin(), a.rend());
    for (int i = 1; i <=n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }
    while (q--)
    {
        int k, ans=-1;
        cin >> k;
        auto it = lower_bound(prefix.begin(), prefix.end(), k);
        if(it!=prefix.end()){
            ans = it - prefix.begin();
        }
        cout << ans << nl;
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