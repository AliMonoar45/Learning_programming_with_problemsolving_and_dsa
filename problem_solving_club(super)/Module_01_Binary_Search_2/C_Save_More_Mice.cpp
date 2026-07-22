#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for (auto &i : a)
        cin >> i;

    sort(a.rbegin(), a.rend());
    // akhon lamda function

    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        for (int i = 0; i <mid ; i++)
        {
            if(a[i]<=cnt)
                return false;
            cnt += (n - a[i]);
        }
        return true;
        
    };

    // define range
    ll l = 0, r = k,ans=0;
    // apply binary search in difrent way
    while (l  <= r)
    {
        // to calculate inside range that dose not run out of boundary
        ll mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    cout << ans << nl;
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