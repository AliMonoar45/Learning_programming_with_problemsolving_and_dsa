#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    for (int i = 0; i <= 5; i++)
    {
        if (x.find(s) != string::npos)
        {
            cout << i << nl;
            return;
        }
        x += x;
    }
    cout << -1 << nl;
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