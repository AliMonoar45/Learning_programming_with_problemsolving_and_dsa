#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (auto &i : v)
        cin >> i;

    long long ans = -1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            ans = max(ans, v[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {   
        for (int j = i+1; j < n; j++)
        {
            long long sum = v[i] + v[j];

            if (sum % 2 == 0)
            {
                ans = max(ans, sum);
            }
        }
    }
    cout << ans;

    return 0;
}