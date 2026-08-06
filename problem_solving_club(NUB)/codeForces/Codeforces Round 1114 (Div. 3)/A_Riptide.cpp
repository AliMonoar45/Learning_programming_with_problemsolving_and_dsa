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
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b || a == c || b == c || c == a)
    {
        cout << 0 << nl;
        return;
    }
    int op = 0;
    while (1)
    {
        int mx = max({a, b, c});
        int mn = min({a, b, c});
        int md = (a + b + c) - mn - mx;

        mx -= 1;
        mn += 1;
        op++;

        a = mn, b = mx, c = md;
        if (a == b || a == c || b == c || c == a)
        {
            cout << op << nl;
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}