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
    int ini_zero = count(s.begin(), s.end(), '0');
    int ini_one = count(s.begin(), s.end(), '1');
    if (abs(ini_one - ini_zero) > 2)
    {
        cout << -1 << nl;
        return;
    }
    int del0 = 0, del1 = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            if (s[i] == '0')
                del0++;
            else
                del1++;
        }
    }
    if (abs(del0 - del1) <= 0)
    {
        cout << del0 + del1 << nl;
    }
    else
    {
        cout << del0 + del1 + (abs(del0 - del1))-1 << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}