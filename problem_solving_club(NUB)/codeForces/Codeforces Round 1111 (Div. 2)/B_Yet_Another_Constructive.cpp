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
    int n, k, m;
    cin >> n >> k >> m;
    if (k <= m)
    {
        int x = m - k + 1;
        cout << "YES\n";
        for (int i = 1; i <= n; i++)
        {
            if (i % k)
                cout << 1;
            else
                cout << x;
            if (i != n)
                cout << " ";
        }
        cout << nl;
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}