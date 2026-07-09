#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int one = 0, two = 0;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
        if (i == 1)
            one++;
        else
            two++;
    }
    // cout << one << " " << two << nl;
    int ans;
    if(one%2==0)
        ans = min(two, one / 2);
    else
        ans = two;
    cout << ans << nl;
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