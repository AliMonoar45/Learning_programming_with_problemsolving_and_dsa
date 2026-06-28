#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool binary_search(vector<ll> &a, ll x)
{
    ll l = 0, r = a.size() - 1;

    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (x == a[mid])
        {
            return true;
        }
        else if (x < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return false;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &&i : a)
    {
        cin >> i;
    }
    while (k--)
    {
        ll x;
        cin >> x;
        if (binary_search(a, x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}