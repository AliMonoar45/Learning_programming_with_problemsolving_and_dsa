#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<long long> a(n), h(n);
    for (auto &&i : a)
    {
        cin >> i;
    }
    for (auto &&i : h)
    {
        cin >> i;
    }
    if (n == 1)
    {
        if (a[0] <= k)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return;
    }

    int l = 0, r = 1, len = 0;
    int sub_sum = a[0];
    if(a[0]<=k)
        len = 1;

    while (r<n)
    {
        // nibo jodi hoi 
        if(h[r-1]%h[r]==0)
            sub_sum += a[r];
            else{
                l = r;
                sub_sum = a[r];
                if(sub_sum<=k){
                    len = max(len, r - l + 1);
                }
                r++;
                continue;
            }

        // fele dibo 
        while (l<=r&&sub_sum>k)
        {
            sub_sum -= a[l];
            l++;
        }
        len = max(len, r - l + 1);
        r++;
    }
    cout << len << endl;
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