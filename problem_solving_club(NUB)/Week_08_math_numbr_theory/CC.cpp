#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    s += '1';
    for (int i = 1; i < n-1; i++)
    {
        s += '0';
    }
    s += '1';
    cout << s << endl;
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