#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int oR = 0;
    int anD = (1 << 10) - 1;
    for(auto &i:a) {
        cin >> i;
        oR |= i;
        anD &= i;
    }
    cout << oR - anD << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}