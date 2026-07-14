#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (char c : s)
    {
        if (c == 'A')
            a++;
        else
            b++;
    }
    if (a > b)
        cout << "A" << nl;
    else
        cout << "B\n";
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