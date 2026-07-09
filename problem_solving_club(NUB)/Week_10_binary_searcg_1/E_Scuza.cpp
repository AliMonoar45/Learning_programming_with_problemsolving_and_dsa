#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n + 1), pre(n + 1, 0),pre_max(n+1,0);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
        pre_max[i] = max(pre_max[i - 1], a[i]);
    }
    
    // for(auto i:pre){
        
    //     cout << i << " ";
    // }
    while (m--)
    {
        ll x;
        cin >> x;
        ll pos = upper_bound(pre_max.begin(), pre_max.end(), x)-pre_max.begin()-1;

        cout << pre[pos] << " ";
    }
    
    cout << endl;
}
int main()
{
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