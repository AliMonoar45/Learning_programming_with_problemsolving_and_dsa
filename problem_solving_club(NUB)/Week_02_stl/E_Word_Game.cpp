#include <bits/stdc++.h>
#define nl '\n'
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
        vector<string> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        vector<string> y(n);
        for (int i = 0; i < n; i++)
        {
            cin >> y[i];
        }
        vector<string> z(n);
        for (int i = 0; i < n; i++)
        {
            cin >> z[i];
        }

        int x_point = 0, y_point = 0, z_point = 0;
        map<string, int> freq;
        for (auto &s : x)
            freq[s]++;
        for (auto &s : y)
            freq[s]++;
        for (auto &s : z)
            freq[s]++;

        for (auto &s : x)
        {
            if (freq[s] == 1)
                x_point += 3;
            else if (freq[s] == 2)
                x_point += 1;
        }
        for (auto &s : y)
        {
            if (freq[s] == 1)
                y_point += 3;
            else if (freq[s] == 2)
                y_point += 1;
        }
        for (auto &s : z)
        {
            if (freq[s] == 1)
                z_point += 3;
            else if (freq[s] == 2)
                z_point += 1;
        }

        cout << x_point << " " << y_point << " " << z_point;
        // cout << nl;
        // for (int i = 0; i < y.size(); i++)
        // {
        //     cout << y[i] << " ";
        // }
        // cout << nl;
        // for (int i = 0; i < z.size(); i++)
        // {
        //     cout << z[i] << " ";
        // }
        cout << nl;
    }

    return 0;
}