#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    map<int, int> mp;
    for (int &i : a)
    {
        cin >> i;
        mp[i]++;
    }
    if (t == 0)
    {
        cout << mp.size() << endl;
        return;
    }
    mp.erase(a[0]);
    vector<pair<int, int>> cmp;
    for (auto [k, v] : mp)
    {
        cmp.push_back({v, k});
    }
    sort(cmp.begin(), cmp.end());
    int ans = 1;
    for(auto [cnt,val]:cmp){
        int mn = min(cnt, t);
        mp[val] -= mn;
        t -= mn;
        if(mp[val]==0)
            mp.erase(val);
        if(t==0) break;
    }
    cout << ans + mp.size() << endl;
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