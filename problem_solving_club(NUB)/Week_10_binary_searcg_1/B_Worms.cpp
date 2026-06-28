#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n), pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i - 1];
    }
    // for (auto i : pref)
    //     cout << i << " ";
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << lower_bound(pref.begin(), pref.end(), x) - pref.begin() << nl;
    }
    
    return 0;
}