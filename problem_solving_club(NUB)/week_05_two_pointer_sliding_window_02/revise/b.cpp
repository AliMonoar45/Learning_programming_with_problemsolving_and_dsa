#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, n;
    cin >> x >> n;
    cout << (x / 10) * n << endl;
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