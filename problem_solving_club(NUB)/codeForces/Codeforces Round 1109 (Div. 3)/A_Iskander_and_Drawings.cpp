#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    // ali monoar;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int len = 0, mx_l = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '#')
            len++;
        else
        {
            len = 0;
        }
        mx_l = max(mx_l, len);
    }
    cout << ceil(mx_l / 2.0) << nl;
    // if(mx_l==0)
    //     cout << 0 << nl;
    // else{
    //     cout << mx_l / 2 << nl;
    // }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}