#include <bits/stdc++.h>
using namespace std;
int f(int x, int y)
{
    if (x < y)
        return -1;
    if (x == y)
        return 0;
    if (x > y)
        return 1;
}
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    bool z = false;

    for (auto &i : a)
    {
        cin >> i;
        if (i == 0)
            z = true;
    }

    set<int> ans;

    int x = 0;
    for (auto &i : a)
    {
        x = f(x, i);
        ans.insert(x);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
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
        // ali monoar
    }

    return 0;
}