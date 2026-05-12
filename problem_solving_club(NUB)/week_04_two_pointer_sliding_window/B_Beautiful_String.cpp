#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << 0 << endl;
        return;
    }

    vector<int> idx;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {

            idx.push_back(i + 1);
        }
    }
    if (!idx.empty())
    {
        cout << idx.size() << endl;
        for (auto i : idx)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    vector<int> idx2;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            idx2.push_back(i + 1);
    }
    if(!idx2.empty()){
        cout << idx2.size() << endl;
        for(auto i: idx2)
            cout << i << " ";

        cout << endl;
        return;
    }
    cout << -1 << endl;
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