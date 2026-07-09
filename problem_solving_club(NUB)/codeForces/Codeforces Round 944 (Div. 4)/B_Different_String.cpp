#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string t = s;

    bool flag = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[0] != s[i])
        {
            flag = false;
            break;
        }
    }

    string rev = s;
    reverse(rev.begin(), rev.end());

    if (flag)
    {
        cout << "NO" << nl;
    }
    else
    {
        next_permutation(s.begin(), s.end());
        cout << "YES" << nl;
        cout << s << nl;
    }
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
