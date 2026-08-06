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
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();

    vector<int> freq_t(26, 0);
    for (auto c : t)
    {
        freq_t[c - 'A']++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (freq_t[s[i] - 'A'] > 0)
        {
            freq_t[s[i] - 'A']--;
        }
        else
        {
            s[i] = '.';
        }
    }
    string check = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '.')
        {
            check += s[i];
        }
    }
    if (check == t)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}