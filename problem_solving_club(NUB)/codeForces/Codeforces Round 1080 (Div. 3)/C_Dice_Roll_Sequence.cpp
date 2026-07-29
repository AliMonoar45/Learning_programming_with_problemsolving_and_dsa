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
    int op = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] == a[i + 1] || a[i + 1] == 7 - a[i])
        {
            op++;
            a[i + 1] = 0;
        }
    }
    cout << op << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}