#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    string s;
    cin >> s;

    if (s[s.size() - 1] == 's' && s[s.size() - 2] == 'u')
    {
        s[s.size() - 2] = 'i';
        s.pop_back();
    }
    cout << s << nl;
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