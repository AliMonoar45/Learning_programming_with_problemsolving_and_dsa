#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c)
    {
        cout << "STAIR" << nl;
    }
    else if (a < b && b > c)
    {
        cout << "PEAK" << nl;
    }
    else
    {
        cout << "NONE" << nl;
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
