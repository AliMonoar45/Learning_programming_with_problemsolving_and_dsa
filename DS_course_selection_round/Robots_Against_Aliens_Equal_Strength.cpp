#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long> row_sum(n, 0);
    vector<bool> has_zero(n, false);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            long long x;
            cin >> x;
            row_sum[i] += x;
            if (x == 0)
                has_zero[i] = true;
        }
    }
    bool found_fixed = false;
    long long target = 0;
    for (int i = 0; i < n; i++)
    {
        if (!has_zero[i])
        {
            if (!found_fixed)
            {
                target = row_sum[i];
                found_fixed = true;
            }
            else if (row_sum[i] != target)
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES";

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<< a[i][j]<<" ";
    //     }
    //     cout << endl;
    // }

    return 0;
}