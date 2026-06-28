#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    // ali monoar
    int n;
    cin >> n;
    vector<int> a(n);
    int all_xor = 0;
    for(auto &i:a){
        cin >> i;
        all_xor |= i;
    }
    if(all_xor==0){
        cout << 0 << nl;
        return;
    }
    int car = 0,op=0;
    for (int i = 0; i < n; i++)
    {
        car |= a[i];
        if(car==all_xor){
            op++;
            car = 0;
        }
    }
    int ans = n - op;
    cout << ans << nl;
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