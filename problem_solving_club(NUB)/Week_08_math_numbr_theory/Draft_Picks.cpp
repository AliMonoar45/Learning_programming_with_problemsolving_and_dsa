#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> sum(n + 1, 0);
    int p = 1, d = 1;
    for (int i = k; i >=1; i--)
    {
        sum[p] += i;
        if(d==1){
            if(p==n){
                d = -1;
            }else{
                p++;
            }
        }else{
            if(p==1){
                d = 1;
            }else{
                p--;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        ans = max(ans, sum[i]);
    
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