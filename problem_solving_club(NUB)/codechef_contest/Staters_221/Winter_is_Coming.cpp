#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    bool j = false;
    vector<int> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    int cnt = 0;
    for (auto i : v)
    {
        if (!j && i <a)
        {
            cnt++;
            j = true;
        }
        else if (j && i > b)
        {
            j = false;
        }
    }

    cout << cnt << endl;
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