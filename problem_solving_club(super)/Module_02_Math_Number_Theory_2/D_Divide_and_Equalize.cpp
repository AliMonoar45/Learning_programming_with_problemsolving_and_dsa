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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                while (a[i] % j == 0)
                {
                    cnt[j]++;
                    a[i] /= j;
                }
            }
        }
        if (a[i] > 1)
            cnt[a[i]]++;
    }
    bool ok = true;
    for (auto [x, y] : cnt)
    {
        if (y % n != 0)
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}