#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    int d_sum = 0;
    while (n>0)
    {
        int ld = n % 10;
        n /= 10;
        d_sum += ld;
    }
    cout << d_sum << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while(tc--) solve();
    return 0;
}