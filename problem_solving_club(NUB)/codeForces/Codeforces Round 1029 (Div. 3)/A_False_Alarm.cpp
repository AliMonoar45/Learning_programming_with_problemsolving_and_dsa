#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int first_one_idx = -1, last_one_idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            if (first_one_idx == -1)
            {
                first_one_idx = i;
            }
            last_one_idx = i;
        }
    }

    if (first_one_idx == -1)
    {
        cout << "YES" << "\n";
        return;
    }

    int len = last_one_idx - first_one_idx + 1;
    if (len <= x)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();
    return 0;
}
