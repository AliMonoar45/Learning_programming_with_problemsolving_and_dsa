#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n <= 1)
    {
        cout << 0 << endl;
        return;
    }

    ll dif = abs(a[1] - a[0]);
    for (int i = 2; i < n; i++)
    {
        dif = __gcd(dif, abs(a[i] - a[i - 1]));
    }
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans += (a[i] - a[i - 1]) / dif - 1;
    }
    cout << ans << endl;
}
int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
