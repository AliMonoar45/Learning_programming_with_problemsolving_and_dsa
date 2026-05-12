#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    bool ok = true;
    for (auto it : freq)
    {

        if (it.first % it.second != 0)
        {
            ok = false;
            break;
        }
    }

    if (ok)
        cout << "YES\n";
    else
        cout << "No\n";
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