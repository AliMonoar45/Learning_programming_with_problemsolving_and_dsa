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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    n *= 2;
    string tmp = s;
    for (int i = 0; i < n; i++)
    {
        if (tmp[i] == '1' && tmp[(i + 1) % n] == '0')
        {
            swap(s[i], s[(i + 1) % n]);
        }
    }
    // cout << s << nl;
    int red = 0, blue = 0;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            red += (s[i] == '1');
        else
            blue += (s[i] == '1');
    }
    cout << red << " " << blue;
    cout << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}