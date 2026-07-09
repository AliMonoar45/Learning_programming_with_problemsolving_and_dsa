#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(d<b){
        cout << -1 << nl;
        return;
    }
    int k = d - b;
    if(a+k<c){
        cout << -1 << nl;
        return;
    }
    int move = a - c + 2 * k;
    cout << move << nl;
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