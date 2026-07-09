#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    // ali monoar
    int n;
    cin >> n;
    string s;
    cin >> s;
    int op = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            op++;
        }
    }
    int ans = 1;
    if (op == 1)
    {
        ans = 2;
    }
    else
    {
        ans = 1;
    }
    cout << ans << nl;
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