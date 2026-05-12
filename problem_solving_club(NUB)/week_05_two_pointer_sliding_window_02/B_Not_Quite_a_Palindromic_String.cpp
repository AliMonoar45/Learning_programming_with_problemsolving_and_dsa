#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int zeros = 0, ones = 0;
    for (auto c : s)
    {
        if (c == '0')
            zeros++;
        else
            ones++;
    }
    int max_good = (zeros / 2) + (ones / 2);
    int min_good = max(ones, zeros) - (n / 2);
    if (k >= min_good && (k - min_good) % 2 == 0 && k <= max_good)
        cout << "YES\n";

    else
    {
        cout << "NO\n";
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