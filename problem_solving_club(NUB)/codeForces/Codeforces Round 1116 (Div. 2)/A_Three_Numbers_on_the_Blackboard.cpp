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
    vector<int> a(3);
    for (auto &i : a)
        cin >> i;

    int cnt_z = count(a.begin(), a.end(), 0);
    if (cnt_z == 2)
    {
        cout << 0 << nl;
        return;
    }
    sort(a.begin(), a.end());
    if (a[0] + a[1] >= a[2])
    {

        cout << a[2] - a[0] << nl;
        return;
    }
    cout << a[0] + a[1] - a[0] << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}