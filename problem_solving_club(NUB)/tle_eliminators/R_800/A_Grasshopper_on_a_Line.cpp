#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    if(n%k!=0||k>n){
        cout << 1 << nl;
        cout << n << nl;
        return;
    }
    
    for (int i = 1; i <= n/2; i++)
    {
        int x = n - i;
        if(x%k!=0&&i%k!=0){
            cout << 2 << nl;
            cout << x << " " << i << nl;
            return;
        }
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