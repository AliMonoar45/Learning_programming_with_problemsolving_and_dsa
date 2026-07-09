#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n, s, m;
    cin >> n >> s >> m;

    vector<pair<int, int>> segs;
    segs.push_back({0, 0});
    segs.push_back({m, m});

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        segs.push_back({l, r});
    }

    sort(segs.begin(), segs.end());

    for (int i = 1; i < (int)segs.size(); i++)
    {
        if (segs[i].first - segs[i - 1].second >= s)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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