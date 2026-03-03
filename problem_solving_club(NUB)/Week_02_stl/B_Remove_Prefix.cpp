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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        // while (v.size() > 1 && v[0] == v[1])
        // {
        //     v.pop_front();
        //     cnt++;
        // }

        set<int> s;
        for (int i = n-1; i >=0; i--)
        {
            if (s.count(v[i]))
                {
                    cnt = i+1;
                    break;
                }
                else
                    s.insert(v[i]);
        }

        cout << cnt << endl;
    }

    return 0;
}