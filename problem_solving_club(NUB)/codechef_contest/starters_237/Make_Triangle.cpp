#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x, y, z;
    cin >> x >> y >> z;
    int m = max(x, max(y, z));
    int s = x + y + z - m;
    cout << max(0, m - s + 1) << endl;
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