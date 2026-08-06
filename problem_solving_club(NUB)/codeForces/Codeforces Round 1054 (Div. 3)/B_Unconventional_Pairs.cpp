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
    for(auto &i:a)
        cin >> i;
    
    sort(a.begin(), a.end());
    
    int ans = 0;
    for (int i = 0; i < n; i += 2)
    {
        int dif = abs(a[i + 1] - a[i]);
        ans = max(ans, dif);
    }
    cout << ans << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}