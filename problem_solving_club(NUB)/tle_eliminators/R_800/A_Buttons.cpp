#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        cout << "First";
    }
    else if (b > a)
    {
        cout << "Second";
    }
    else if (c % 2 == 0)
    {
        cout << "Second";
    }
    else
    {
        cout << "First";
    }
    cout << nl;
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