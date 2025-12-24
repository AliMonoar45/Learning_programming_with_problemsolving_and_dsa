#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 1, r = n;
        while (l <= r)
        {
            int middle = (l + r) / 2;
            if (a[middle] == x)
            {
                flag = true;
                break;
            }
            else if (a[middle] > x)
            {
                r = middle - 1;
            }
            else
            {
                l = middle + 1;
            }
        }

        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}