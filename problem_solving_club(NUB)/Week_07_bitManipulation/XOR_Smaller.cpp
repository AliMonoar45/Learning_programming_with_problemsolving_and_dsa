#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    vector<int> f(30, 0);
    for (auto x : a)
    {
        for (int i = 0; i < 30; i++)
        {
            if (x >> i & 1)
            {
                f[i]++;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 30; i++)
    {
        if (f[i] == n)
        {
            ans += (1 << i);
        }
    }

    cout << ans << "\n";
}

int main() {
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