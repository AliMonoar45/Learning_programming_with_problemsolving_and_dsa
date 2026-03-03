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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        bool flag = true;
        sort(v.begin(), v.end());
        // reverse(v.begin(), v.end());
        for (int i = 0; i < n-1; i++)
        {
            if (v[i] < x && v[i + 1] > x)
            {
                cout << "No";
                flag = false;
                break;
            }
            else if (v[i] > x && v[i + i] < x)
            {
                cout << "No";
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            /* code */
            cout << "Yes";
        }

        cout << endl;
    }

    return 0;
}