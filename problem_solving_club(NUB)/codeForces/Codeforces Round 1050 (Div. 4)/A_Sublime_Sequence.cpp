#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int x, n;
    cin >> x >> n;
    int sum = 0;
    while (n--)
    {
        sum += x;
        if(x>0)
            x = -x;
        else
            x = -1 * x;
    }
    cout << sum << nl;
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