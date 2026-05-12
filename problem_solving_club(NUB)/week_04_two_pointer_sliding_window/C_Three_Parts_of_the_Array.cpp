#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (auto &i : v)
        cin >> i;

    ll l = 0, r = n - 1;
    ll ans = 0, l_sum = 0, r_sum = 0;
    while (l <= r)
    {

        if (l_sum < r_sum)
        {
            l_sum += v[l];
            l++;
        }
        else if (r_sum <= l_sum)
        {
            r_sum += v[r];
            r--;
        }
        if (l_sum == r_sum)
            ans = max(ans, l_sum);
    }
    cout << ans << endl;
    return 0;
}