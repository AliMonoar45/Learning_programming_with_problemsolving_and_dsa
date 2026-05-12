#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, char>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        if (v[i].first % 2 == 0)
            v[i].second = 'b';
        else
            v[i].second = 'w';
    }
    bool check_1 = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].second == v[i + 1].second)
        {
            check_1 = false;
            break;
        }
    }
    sort(v.begin(), v.end());

    bool check_2 = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].second == v[i + 1].second)
        {
            check_2 = false;
            break;
        }
    }
    if (check_1 && check_2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << '\n';
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