#include <bits/stdc++.h>
using namespace std;
bool non_dec(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i - 1] > v[i])
            return false;
    }
    return true;
}
void solve()
{
    int n;

    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        vector<int> x, y, b;
        for (int j = 0; j < i; j++)
        {
            x.push_back(a[j]);
        }
        for (int j = i; j < n; ++j)
        {

            y.push_back(a[j]);
        }
        b = y;
        b.insert(b.end(), x.begin(), x.end());
        if (non_dec(b))
        {
            flag = true;
            break;
            
        }
        
        
    }
    if (flag)
        cout << "Yes\n";
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
        solve();
    return 0;
}