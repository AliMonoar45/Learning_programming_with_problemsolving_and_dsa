#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll GCD(ll a, ll b)
{
    return __gcd(a, b);
}
ll LCM(ll a, ll b)
{
    return (a / GCD(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll cnt1 = (n / a) * p;
    ll cnt2 = (n / b) * q;
    ll both = n / LCM(a, b);

    cout << cnt1 + cnt2 - both * (p + q) + both * max(p, q);
    return 0;
}
