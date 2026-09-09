#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int o = 0;
    int t = 0;
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2!=0)
            o++;
        else if (a[i]%4==0)
        {
            f++;
        }else if(a[i]%2==0)
            t++;
    }
    // cout << o << " " << t << " " << f<< nl;

    int res = max({o, t, f});
    cout << res << nl;

   
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}