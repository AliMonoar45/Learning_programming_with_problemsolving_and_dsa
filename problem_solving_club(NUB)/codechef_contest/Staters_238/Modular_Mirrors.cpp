#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long m;
    cin >> n >> m;

    if (n == 1 || n == 3)
    {
        cout << -1 << '\n';
        return;
    }
    if (n == 2)
    {
        cout << 1 << " " << 1 << '\n';
        return;
    }

    if (n % 6 != 2 && n % 6 != 5)
    {
        cout << -1 << '\n';
        return;
    }

    vector<long long> a(n);
    long long p = 1;
    a[0] = p;
    a[1] = p;
    for (int i = 2; i < n; ++i)
    {
        long long val = (a[i - 1] - a[i - 2]) % m;
        if (val < 0)
            val += m;
        a[i] = val;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << (i + 1 == n ? '\n' : ' ');
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
