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
        int total = 0;
        for (int i = 0; i <n; i++)
        {
            
            cin >> v[i];
            total += v[i];
        }
        if(n==1)
            {
                cout << 1<<endl;
                continue;
            }
        auto mx = max_element(v.begin(), v.end());
        int cnt = 0;
        for (auto i : v)
        {
            int val = *mx;
            if (i == val)
                cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}