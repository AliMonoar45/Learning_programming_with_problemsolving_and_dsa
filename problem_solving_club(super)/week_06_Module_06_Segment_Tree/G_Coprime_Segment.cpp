#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int maxN = 1e5 + 9;
ll a[maxN], t[4 * maxN];


void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = gcd(t[l], t[r]);
}


ll query(int n, int b, int e, int i, int j)
{
    if (j < b || e < i)
        return 0;
    if (i <= b && e <= j)
        return t[n];
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return gcd(query(l, b, mid, i, j),
               query(r, mid + 1, e, i, j));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);

    auto ok = [&](int len)
    {
        for (int L = 1; L + len - 1 <= n; L++)
        {
            int R = L + len - 1;
            if (query(1, 1, n, L, R) == 1)
                return true;
        }
        return false;
    };

    int l = 1, r = n, mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1; 
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << nl;
    return 0;
}
