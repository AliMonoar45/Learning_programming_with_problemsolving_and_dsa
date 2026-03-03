#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end());
        pair<int, int> mn = {-1, INT_MAX};
        for (auto val : v)
        {
            if (val.first >= 7 && val.second < mn.second)
            {
                mn.first = val.first;
                mn.second = val.second;
            }
        }
        if(mn.second==INT_MAX)
            mn.second = -1;
        cout << mn.second;
        cout << endl;
    }

    return 0;
}