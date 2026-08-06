#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int a, b;
    cin >> a >> b;
    int x = (a ^ (a & b)) + (b ^ (a & b));
    cout << x << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}