#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int odd = 0, even = 0;
    for (auto &i : a)
    {
        cin >> i;
        if (i % 2 == 0)
            even++;
        else
            odd++;
    }
    if(odd==0)
        cout << 0 << nl;
        else{
            int ans = even + 1 + ((odd - 1) / 2);
            cout << ans << nl;
        }
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