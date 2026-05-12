#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    long long ans = 0, len = 0;

    for (auto i : a)
    {
        // segment jog kora
        if (i <= q)
        {
            len++;
        }
        else
        {
            // segmet break tai ans make kora
            if (len >= k)
            {
                // cont seg ar day gula koto gula tar hiseb
                int days = len - k;
                ans += (days + 1) * (days + 2) / 2;
                // len reset korte hobe
                len = 0;
            }
        }
    }
    // jodi surutei len>=k hoi taholeo ans make korte hobe
    if (len >= k)
    {
        int days = len - k;
        ans += (days + 1) * (days + 2) / 2;
    }
    cout << ans;
    cout << endl;
}
void solve2(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    long long ans = 0;
    int l = 0, r = 0;
    while (r<n)
    {
        while (l<n&&a[l]>q)
        {
            l++;
        }
        r = l;
        while (r<n&&a[r]<=q)
        {
            r++;
        }
        if(r-l+1>=k){
            ans += 1LL * (r - l + 1 - k) * (r - l + 2 - k) / 2;
        }
        l = r;
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve2();
    }

    return 0;
}