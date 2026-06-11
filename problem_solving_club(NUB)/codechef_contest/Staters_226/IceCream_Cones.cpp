#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, n;
    cin >> x >> y >> n;
    int melt = y * n;
    if(x-melt<=0)
        cout << 0 << endl;
    else
        cout << x - melt << endl;
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