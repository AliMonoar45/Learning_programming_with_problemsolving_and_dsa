#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, l, r, a, b;
    cin >> x >> y >> l >> r >> a >> b;

    ll ans = 0;
    for (int i = a; i < b; ++i)
    {
        if (i >= l && i < r)
            ans += x;
        else
            ans += y;
    }

    cout << ans << '\n';
    return 0;
}
