#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    ll a, b;
    cin >> a >> b;
    if(a==b){
        cout << 0 << " " << 0 << nl;
        return;
    }
    ll g = abs(a - b);
    ll m = min(a % g, g - a % g);
    cout << g << " " << m << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}