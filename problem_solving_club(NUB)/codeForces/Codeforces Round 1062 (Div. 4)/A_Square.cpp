#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a==b&&b==c&&c==d)
        cout << "YES\n";
        else
            cout << "NO\n";
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