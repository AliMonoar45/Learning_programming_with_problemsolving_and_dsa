#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int maxN = 200000 + 9;
int a[maxN];
int t[4 * maxN];

int sumDigits(int x)
{
    int s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = (a[b] >= 10);
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}

void update(int n, int b, int e, int i, int j)
{
    if (j < b || e < i || t[n] == 0)
        return;
    if (b == e)
    {
        a[b] = sumDigits(a[b]);
        t[n] = (a[b] >= 10);
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j);
    update(r, mid + 1, e, i, j);
    t[n] = t[l] + t[r];
}

int query(int n, int b, int e, int i)
{
    if (b == e)
        return a[b];
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    if (i <= mid)
        return query(l, b, mid, i);
    else
        return query(r, mid + 1, e, i);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        build(1, 1, n);
        while (q--)
        {
            int type;
            cin >> type;
            if (type == 1)
            {
                int l, r;
                cin >> l >> r;
                update(1, 1, n, l, r);
            }
            else
            {
                int x;
                cin >> x;
                cout << query(1, 1, n, x) << nl;
            }
        }
    }
    return 0;
}
