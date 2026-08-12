#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    ll x, n;
    cin >> x >> n;
    if (x % 2 == 0)
    {
        if (n % 4 == 0)
            cout << x << nl;
        else if (n % 4 == 1)
            cout << x - n << nl;
        else if (n % 4 == 2)
            cout << x + 1 << nl;
        else
            cout << x + n + 1 << nl;
    }
    else
    {
        if (n % 4 == 0)
            cout << x << nl;
        else if (n % 4 == 1)
            cout << x + n << nl;
        else if (n % 4 == 2)
            cout << x - 1 << nl;
        else
            cout << x - n - 1 << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}