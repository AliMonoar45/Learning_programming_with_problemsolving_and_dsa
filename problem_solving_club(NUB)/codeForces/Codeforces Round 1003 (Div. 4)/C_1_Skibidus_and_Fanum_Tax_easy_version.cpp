#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(auto &i:a)
        cin >> i;
        for(auto &i:b)
            cin >> i;
    if(is_sorted(a.begin(),a.end())){
        cout << "YES\n";
        return;
    }

    sort(b.begin(), b.end());
    int p = min(a[0], b[0] - a[0]);
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        int y = b[0] - a[i];
        if(p<=min(x,y)){
            p = min(x, y);
        }else{
            if(p<=max(x,y)){
                p = max(x, y);
            }else{
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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