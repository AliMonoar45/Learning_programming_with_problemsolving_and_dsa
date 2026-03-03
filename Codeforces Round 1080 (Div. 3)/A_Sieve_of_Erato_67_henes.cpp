#include <bits/stdc++.h>
using namespace std;
int main()
{
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
        bool find_one = false;
        bool find_s = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
                find_one = true;
            if (v[i] == 67)
                find_s = true;
        }
        if (find_s)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}