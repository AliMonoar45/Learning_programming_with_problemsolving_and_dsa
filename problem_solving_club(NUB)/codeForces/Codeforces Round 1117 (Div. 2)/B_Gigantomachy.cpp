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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {

        cin >> b[i];
    }
    int for_1 = a[0] + n - 1;
    int for_2 = b[0] + m - 1;
    if(for_1>=for_2)
        cout << 1 << nl;
    else
        cout << 2 << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}
