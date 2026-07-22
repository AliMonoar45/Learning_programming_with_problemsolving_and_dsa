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
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            a[i] = a[i] + 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] % a[i] == 0)
            a[i + 1] = a[i + 1] + 1;
    }
    for (auto i : a)
        cout << i << " ";
    cout << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    
    test

    solve();

    return 0;
}