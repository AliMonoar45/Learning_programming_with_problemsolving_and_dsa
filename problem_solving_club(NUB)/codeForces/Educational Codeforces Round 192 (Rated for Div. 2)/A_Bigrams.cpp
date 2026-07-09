#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    // ali monoar
    int n;
    cin >> n;
    int cnt = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        if (c >= 3)
            flag = true;
        if (c >= 2)
            cnt++;
    }
    if (flag || cnt >= 2)
        cout << "YES\n";
    else
        cout << "NO\n";
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