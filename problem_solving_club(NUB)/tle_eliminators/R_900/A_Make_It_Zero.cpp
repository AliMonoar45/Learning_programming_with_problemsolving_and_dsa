#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n % 2 == 0)
    {
        cout << 2 << nl;
        cout << 1 << " " << n << nl;
        cout << 1 << " " << n << nl;
    }
    else
    {
        cout << 4 << nl;
        cout << 1 << " " << n - 1 << nl;
        cout << 1 << " " << n - 1 << nl;
        cout << n - 1 << " " << n << nl;
        cout << n - 1 << " " << n << nl;
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