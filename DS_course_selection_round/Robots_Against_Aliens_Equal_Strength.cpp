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

    /* int n, m;
    cin >> n >> m;
    vector<vector<long long>> v(n, vector<long long>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<long long> row_sum(n, 0);
    bool is_possible = true;
    for (int i = 0; i < n; i++)
    {
        bool has_zero = false;
        long long sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += v[i][j];
            if (v[i][j] == 0)
                has_zero = true;
        }
        row_sum[i] = sum;
    }
     */

    return 0;
}