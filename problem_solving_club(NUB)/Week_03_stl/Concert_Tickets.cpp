#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    multiset<int> h;
    for (int i = 1; i <= n;i++){
        int x;
        cin >> x;
        h.insert(x);
    }

    for (int j = 1; j <= m; j++){
        int t;
        cin >> t;
        auto it = h.upper_bound(t);
        if(it==h.begin())
            cout << -1 << endl;
        else{
            --it;
            cout << *it << endl;
            h.erase(it);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}