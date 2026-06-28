#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    bool st_check = is_sorted(a.begin(), a.end());
    if (k == 1 && st_check == false)
        cout << "NO\n";
    else
        cout << "YES\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}