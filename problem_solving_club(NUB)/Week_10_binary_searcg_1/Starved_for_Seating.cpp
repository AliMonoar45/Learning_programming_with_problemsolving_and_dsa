#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    // ali monoar
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    int total_p = 0;
    for(auto &i:a){

        cin >> i;
        total_p += i;
    }
    // cout << total_p << nl;
    int pos = 2 * k;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if((total_p+a[i]+a[j]>pos))
                ans++;
        }
        
    }
    cout << ans << nl;
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