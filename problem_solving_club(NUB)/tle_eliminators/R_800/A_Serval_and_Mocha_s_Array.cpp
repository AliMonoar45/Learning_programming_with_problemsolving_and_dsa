#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

ll GCD(ll x, ll y)
{
    return __gcd(x, y);
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;

    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (GCD(a[i], a[j]) <= 2)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
