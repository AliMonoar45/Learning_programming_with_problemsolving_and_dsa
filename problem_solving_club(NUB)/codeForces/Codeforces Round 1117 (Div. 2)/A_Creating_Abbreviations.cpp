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
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    map<char, int> mp;
    for (auto i : a)
    {
        mp[i[0]]++;
    }
    bool flag = true;
    while (m--)
    {
        string s;
        cin >> s;
        for (auto c : s)
        {
            char t = tolower(c);
            if(mp.count(t) == 0)
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";

    // cout << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}