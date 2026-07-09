#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int puron = min(m, a) + min(m, b);
    int baki = 2 * m - puron;
    puron += min(baki, c);

    cout << puron << nl;
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