#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n, m,l,r;
    cin >> n >> m >> l >> r;
    if(n==m){
        cout << l << " " << r << nl;
        return;
    }

    int leftp = max(l, min(0, r - m));
    int rightp = leftp + m;
    cout << leftp << " " << rightp << nl;

   
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