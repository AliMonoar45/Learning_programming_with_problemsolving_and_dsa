#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

const int maxN = 1e5 + 9;
ll a[maxN], t[4 * maxN];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = 0;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}

// update
void update(int n, int b, int e, int i, int v)
{
    // out
    if (i < b || i > e)
    {
        return;
    }
    // in
    if (b == e)
    {
        t[n] = v;
        return;
    }
    // intersect
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = t[l] + t[r];
}
int query(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
    {
        return 0;
    }
    if (b >= i && e <= j)
    {
        return t[n];
    }

    // intersect
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;

    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, q;
        cin >> n >> m;
        vector<pair<int, int>> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        cin >> q;
        vector<int> queries(q);
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i];
        }

        auto ok = [&](int mid)
        {
            build(1, 1, n);
            for (int i = 0; i <= mid; i++)
            {
                update(1, 1, n, queries[i], 1);

            }
            bool found = false;

            for (int i = 0; i < m; i++)
            {
                int L = a[i].first, R = a[i].second, seg_len, need, has;
                seg_len = (R - L) + 1;
                need = (seg_len + 1) / 2;
                if(!(seg_len&1)){
                    need++;
                }
                has = query(1, 1, n, L, R);
                if(has>=need){
                    found = true;
                    break;
                }
            }
            return found;
            
        };
        int l=0, r = q - 1, mid, ans = -1;
        while (l<=r)
        {
            mid = l + (r - l) / 2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        if(ans!=-1){
            ans++;
        }
        cout << ans << nl;
    }

    return 0;
}