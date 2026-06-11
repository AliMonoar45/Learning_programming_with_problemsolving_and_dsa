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
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int cost;
                if (j == i + 1)
                {
                    cost = v[i] + v[j] / 2; 
                }
                else if (i == j + 1)
                {
                    cost = v[j] + v[i] / 2; 
                }
                else
                {
                    cost = v[i] + v[j]; 
                }
                ans = min(ans, cost);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
