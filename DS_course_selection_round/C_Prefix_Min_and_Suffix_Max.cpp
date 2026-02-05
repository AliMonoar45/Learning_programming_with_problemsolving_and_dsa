#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        vector<int> pre(n), suff(n);
        pre[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = min(pre[i - 1], a[i]);
        }
        suff[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            /* code */
            suff[i] = max(suff[i + 1], a[i]);
        }
        string s = "";
        for (int i = 0; i < n; i++)
        {
            if (a[i] == pre[i] || a[i] == suff[i])
                s += '1';
            else
                s += '0';
        }
        cout << s;
        s = "";
        cout << endl;
    }

    return 0;
}