#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b;
    cin >> a >> b;
    while (a % 2 == 0)
        a /= 2;
    while (b % 2 == 0)
        b /= 2;
    if (a == b)
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