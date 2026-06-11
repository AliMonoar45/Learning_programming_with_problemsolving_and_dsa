#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    std::vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    for (int i = 0; i < n - 1; i++)
    {

        if (a[i] > a[i + 1])
        {
            cout << i + 1 << " " << i + 2 << endl;
            return;
        }
    }
    cout << -1 << endl;
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