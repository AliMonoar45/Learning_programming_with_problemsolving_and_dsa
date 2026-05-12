#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    ll l = 0, r = 0, sum = 0, ans = INT_MAX;
    while (r < n)
    {
        sum += a[r];

        // if cindition match
        if (sum >= s)
        {
            // minimum window
            while (sum >= s && l <= r)
            {
                ans = min(ans, (r - l + 1));
                sum -= a[l];
                l++;
            }
        }

        r++;
    }
    if (ans == INT_MAX)
        cout << -1;
    else
        cout << ans;
    return 0;
}