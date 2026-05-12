#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0;
    for (int s = 2; s <= 2 * n; s++)
    {
        int cnt = 0;
        for (auto [x, cnt_x] : mp)
        {
            int y = s - x;
            if (mp.find(y) != mp.end())
            {
                cnt += min(cnt_x, mp[y]);
            }
        }
        cnt /= 2;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}
int main() {
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