#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for(auto &i:a)
        cin >> i;
    long long l = 0, r = 0;
    long long ans = 0;
    multiset<long long> ml;
    while (r < n)
    {
        ml.insert(a[r]);
        long long mn = *ml.begin();
        long long mx = *ml.rbegin();
        if ((mx - mn) <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                mn = *ml.begin();
                mx = *ml.rbegin();
                if (mx - mn <= k)
                {
                    break;
                }
                ml.erase(ml.find(a[l]));
                l++;
            }
            mn = *ml.begin();
            mx = *ml.rbegin();
            if ((mx - mn) <= k)
            {
                ans += (r - l + 1);
            }
        }

        r++;
    }

    cout << ans << endl;

    return 0;
}