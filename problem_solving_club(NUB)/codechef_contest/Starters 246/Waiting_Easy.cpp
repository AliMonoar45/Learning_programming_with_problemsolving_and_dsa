#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    // ali monoar

    int n;
    cin >> n;
    ll tot_w = 0;
    ll cur = 0;
    for (int i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        if (p > cur)
            cur = p;
        else
        {
            tot_w += cur - p;
        }
    }
    cout << tot_w << nl;
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