#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ptr = n - 1;
    while (ptr >= 0 && a[ptr] == ptr + 1)
        ptr--;

    if (ptr < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << a[ptr] << endl;
    }
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