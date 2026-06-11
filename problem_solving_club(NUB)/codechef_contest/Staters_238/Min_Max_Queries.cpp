#include <bits/stdc++.h>
using namespace std;

int min_max(vector<int> b)
{
    int m = b.size();
    if (m == 1)
        return b[0];

    vector<int> d(m - 1);
    if (m % 2 == 0)
    {
        for (int i = 0; i < m - 1; i++)
        {
            d[i] = max(b[i], b[i + 1]);
        }
    }
    else
    {
        for (int i = 0; i < m - 1; i++)
        {
            d[i] = min(b[i], b[i + 1]);
        }
    }
    return min_max(d);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    while (q--)
    {
        int x, l, r;
        cin >> x >> l >> r;
        if (x == 1)
        {
            a[l - 1] = r;
        }
        else
        {
            vector<int> sub(a.begin() + l - 1, a.begin() + r);
            cout << min_max(sub) << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
