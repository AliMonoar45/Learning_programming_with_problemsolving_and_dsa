#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
// check bit on or off
bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}

void solve()
{
    int x;
    cin >> x;

    int msb = __lg(x), b = (1 << msb), a = (x ^ b), sum = b, cnt = 0;
    for (int k = 0; k <= msb; k++)
    {
        if (!check_kth_bit_on_or_off(a, k) && !check_kth_bit_on_or_off(b, k) && (sum += (1 << k)) <= x)
        {
            cnt++;
            // sum += (1 << k);
        }
    }
    int ans = (1 << cnt);
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}