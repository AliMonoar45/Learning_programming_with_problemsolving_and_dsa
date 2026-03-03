#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<string, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    reverse(v.begin(), v.end());
    map<string, int> mp;
    for (auto val : v)
    {
        if (mp[val.first] == 0)
        {

            cout << val.first << endl;
            mp[val.first]++;
        }
    }
    return 0;
}