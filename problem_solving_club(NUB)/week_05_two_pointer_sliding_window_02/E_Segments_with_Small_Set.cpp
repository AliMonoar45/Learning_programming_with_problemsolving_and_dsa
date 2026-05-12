#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    map<int, int> mp;
    int l = 0, r = 0;
    long long ans = 0;
    while (r < n)
    {
        mp[v[r]]++;
        if (mp.size() <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (mp.size() > k)
            {
                mp[v[l]]--;
                if (mp[v[l]] == 0)
                {
                    mp.erase(v[l]);
                }
                l++;
            }
            if (mp.size() <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans;
    return 0;
}