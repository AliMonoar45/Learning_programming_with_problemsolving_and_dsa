#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int l = 0, r = 0;
    long long ans = 0;
    map<int, int> mp;
    while (r < n)
    {
        // kaj kora
        mp[a[r]]++;

        // ans make kora
        if (mp.size() <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            // jodi boro hoi tahole remove kora
            while (mp.size() > k)
            {
                mp[a[l]]--;
                if (mp[a[l]] == 0)
                {
                    mp.erase(a[l]);
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