#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll x, ll y)
{
    return __gcd(x, y);
}
ll LCM(ll x, ll y)
{
    return (x / GCD(x, y)) * y;
}
void solve2()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll i = 0;
    ll op = 0;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    if (GCD(a, c) == GCD(b, c))
    {
        cout << 1 << endl;
        return;
    }
    if (GCD(a, c + 1) == GCD(b, c + 1))
    {
        cout << 2 << endl;
        return;
    }
    cout << 3 << endl;
}
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll i = 0;
    ll op = 0;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    while (GCD(a, c + i) != GCD(b, c + i) && i * i <= GCD(a, b))
    {
        i++;
        op++;
    }
    cout << op + 1 << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve2();
    }

    return 0;
}