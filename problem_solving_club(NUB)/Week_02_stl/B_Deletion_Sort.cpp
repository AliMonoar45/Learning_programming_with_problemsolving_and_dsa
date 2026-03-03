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
        int cnt = 0;
        bool sorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
                sorted = false;
        }
        // for (int i = 0; i < n - 1; i++)
        // {
        //     int max = *max_element(v.begin(), v.end());
        // }

        if (sorted)
            cout << v.size() << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}