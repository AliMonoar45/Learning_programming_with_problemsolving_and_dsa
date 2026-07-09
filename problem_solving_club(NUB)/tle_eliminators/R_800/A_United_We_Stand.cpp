#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b, c;
    bool same = true;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] != a[i])
        {
            same = false;
            break;
        }
    }
    if (same)
    {
        cout << -1 << nl;
        return;
    }
    int mx = *max_element(a.begin(), a.end());
    for (int i = 0; i < n;i++){
        if(a[i]==mx)
            c.push_back(a[i]);
        else
            b.push_back(a[i]);
    }
    if (b.empty() || c.empty())
    {
        cout << -1 << nl;
        return;
    }
    cout << b.size() << " " << c.size() << "\n";
    for (auto i : b)
    {
        cout << i << " ";
    }
    cout << nl;
    for (auto i : c)
        cout << i << " ";
    cout << nl;
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