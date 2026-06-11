#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    if(mp['1']==0){
        cout << 0 << endl;
        return;
    }
    int l_o = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1')
            l_o = i;
    }
    int ans = mp['1'] + min(k, ((l_o + 1) - mp['1']));
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