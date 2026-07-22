#include <bits/stdc++.h>
#define ali    \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int first = -1, last = -1;
    for (int i = 0; i < n; ++i)
        if (a[i] != 0)
        {
            first = i;
            break;
        }
    for (int i = n - 1; i >= 0; --i)
        if (a[i] != 0)
        {
            last = i;
            break;
        }

    if (first == -1)
    { 
        cout << 0 << nl;
        return;
    }

    bool hasZeroInside = false;
    for (int i = first; i <= last; ++i)
        if (a[i] == 0)
        {
            hasZeroInside = true;
            break;
        }
    
    cout << (hasZeroInside ? 2 : 1) << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ali solve();

    return 0;
}
