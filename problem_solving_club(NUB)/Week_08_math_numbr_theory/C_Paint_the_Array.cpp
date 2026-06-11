#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long G1 = 0, G2 = 0;
    for (int i = 0; i < n; i += 2)
    {
        G1 = __gcd(G1, a[i]);
    }
    for (int i = 1; i < n; i += 2)
    {
        G2 = __gcd(G2, a[i]);
    }
    long long ans = 0;
    bool flag = true;
    for (int i = 1; i < n; i+=2)
    {
        if (a[i] % G1 == 0)
        {
            flag = false;
        }
    }
    if (flag)
    {
        ans = G1;
    }
    else
    {
        flag = true;

        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % G2 == 0)
            {
                flag = false;
            }
        }
        if(flag){
            ans = G2;
        }
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
        solve();
    }

    return 0;
}