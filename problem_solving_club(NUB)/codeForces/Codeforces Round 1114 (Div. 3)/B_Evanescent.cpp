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
    string s;
    cin >> s;
    if (s.empty())
    {
        cout << 0 << nl;
        return;
    }
    int in_len = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
            in_len++;
    }

    int ans = n;
    for (int i = 1; i < n - 1; i++)
    {
        int c1 = 0, c2 = 0;
        if (s[i - 1] != s[i + 1])
            c1++;
        if (s[i - 1] != s[i])
            c2++;
        if (s[i] != s[i + 1])
            c2++;
        int cr_len = in_len + (c1 - c2);

        ans = min(ans, cr_len);
    }
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}