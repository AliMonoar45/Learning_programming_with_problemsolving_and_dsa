#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    map<int, int> mp;
    for(auto &i:a){
        cin >> i;
        mp[i]++;
    }

    auto ok = [&](ll mid)
    {
        if (mid == 0)
            return true;
        vector<char> seen(mid, 0);
        int have = 0, segments = 0;
        for (int i = 0; i < n; ++i)
        {
            int v = a[i];
            if (v < mid && !seen[v])
            {
                seen[v] = 1;
                have++;
            }
            if (have == mid)
            {
                ++segments;
                if (segments >= k)
                    return true;
                fill(seen.begin(), seen.end(), 0);
                have = 0;
            }
        }
        return segments >= k;
    };

    ll l = 0, r = n, mid, ans = 0;
    while (l<=r)
    {
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}