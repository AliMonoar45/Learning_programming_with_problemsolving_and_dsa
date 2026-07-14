#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, p;
    cin >> s >> p;
    int n = s.size();
    int m = p.size();
    vector<int> a(s.size());
    for (auto &i : a)
        cin >> i;

    auto ok = [&](int mid)
    {
        vector<bool> bad(n + 1);
        for (int i = 0; i < mid; i++)
        {
            bad[a[i]] = true;
        }
        int j = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == p[j] && !bad[i + 1])
            {
                j++;
            }
            if (j == m)
            {
                found = true;
                break;
            }
        }
        return found;
    };

    ll l = 0, r = n, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << nl;

    return 0;
}