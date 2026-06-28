#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    std::vector<int> a(n);
    bool same = true;
    map<int, int> mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
    }
    if (mp.size() == 1)
    {
        cout << 0 << endl;
        return;
    }

    int op = 0;
    std::sort(a.begin(), a.end());

    int tar = a[0];

    int mx = LONG_LONG_MIN;
    int mn = LONG_LONG_MAX;
    while (mx != mn)
    {

        mx = *max_element(a.begin(), a.end());
        mn = *min_element(a.begin(), a.end());

        int mx_idx = max_element(a.begin(), a.end()) - a.begin();
        a[mx_idx] = mx / 2;
        op++;
    }

    cout << op-1 << endl;
}
int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}