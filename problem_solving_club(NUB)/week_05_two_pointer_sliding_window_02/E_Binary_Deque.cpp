#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);

        for (auto &i : a)
            cin >> i;
        int l = 0, r = 0, sum = 0, ans = -1;
        while (r < n)
        {
            sum += a[r];

            while (sum > s)
            {
                sum -= a[l];
                l++;
            }

            if (sum == s)
            {
                ans = max(ans, r - l + 1);
            }
            r++;
        }
        if (ans == -1)
            cout << -1 << endl;
        else
        {
            cout << n - ans << endl;
        }
    }

    return 0;
}