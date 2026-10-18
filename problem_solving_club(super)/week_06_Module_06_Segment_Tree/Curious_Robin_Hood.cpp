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
    t[n] = t[l] + t[r];
}

void update(int n, int b, int e, int i, ll v, bool setZero = false)
{
    if (i < b || i > e)
        return;
    if (b == e)
    {
        if (setZero)
        {
            cout << t[n] << nl;
            t[n] = 0;
        }
        else
        {
            t[n] += v;
        }
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, v, setZero);
    update(r, mid + 1, e, i, v, setZero);
    t[n] = t[l] + t[r];
}

ll query(int n, int b, int e, int i, int j)
{
    if (j < b || e < i)
        return 0;
    if (i <= b && e <= j)
        return t[n];
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int cs = 1; cs <= T; cs++)
    {
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        build(1, 1, n);

        cout << "Case " << cs << ":" << nl;
        while (q--)
        {
            int type;
            cin >> type;
            if (type == 1)
            {
                int i;
                cin >> i;
                i++;
                update(1, 1, n, i, 0, true);
            }
            else if (type == 2)
            {
                int i, v;
                cin >> i >> v;
                i++;
                update(1, 1, n, i, v, false);
            }
            else
            {
                int i, j;
                cin >> i >> j;
                i++;
                j++;
                cout << query(1, 1, n, i, j) << nl;
            }
        }
    }
    return 0;
}
