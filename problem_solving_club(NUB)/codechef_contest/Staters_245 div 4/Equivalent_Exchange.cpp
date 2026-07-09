#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    // ali monoar
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;

    int tot = 0;
    int mx = 0, mn = k;
    bool flag = true;

    for(auto i:a){
        tot += i;
        mx = max(mx, (-1 * tot));
        mn = min(mn, (k - tot));
        if(mx>mn) {
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "Yes";
        else
            cout << "No";

    cout << nl;
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