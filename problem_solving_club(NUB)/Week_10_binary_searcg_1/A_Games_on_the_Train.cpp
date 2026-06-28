#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    // ali monoar
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &&i : a)
    {
        cin >> i;
    }
    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    int dif = mx - mn;
    cout << dif + 1 << nl;
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