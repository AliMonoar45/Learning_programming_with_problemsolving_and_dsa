#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    ll n, x, k;
    cin >> n >> x >> k;
    if (2 * k >= x * (x + 1) && 2 * k <= n * (n + 1) - (n - x) * (n - x + 1))
    { // check if k is between the minimum and maximum sum
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}