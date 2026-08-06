#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

bool kth_bit_on(ll n, ll k)
{
    return ((n >> k) & 1);
}

// turn on kth bit
ll turn_on_kth_bit(ll n, ll k)
{
    return (n | (1LL << k));
}

// turn off kth bit
ll turn_off_kth_bit(ll n, ll k)
{
    return (n & (~(1LL << k)));
}

void solve()
{
    ll b, c, d;
    cin >> b >> c >> d;
    ll a = 0;
    a = b;
    ll msb = max({__lg(b), __lg(c), __lg(d)});
    for (ll k = 0; k <= msb; k++)
    {
        if (!kth_bit_on(b, k) && kth_bit_on(d, k))
        {
            a = turn_on_kth_bit(a, k);
        }
        {
            if (kth_bit_on(c, k) && kth_bit_on(d, k))
            {
                a = turn_off_kth_bit(a, k);
            }
        }
    }
    if((a|b)-(a&c)==d){
        cout << a << nl;
    }else
        cout << -1 << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}