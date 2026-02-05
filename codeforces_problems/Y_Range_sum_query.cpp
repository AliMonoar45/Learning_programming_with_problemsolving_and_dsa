#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    // for(int val:pre)
    //     cout << val << " ";
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
            cout << pre[r - 1]<<endl;
        else
            cout << pre[r - 1] - pre[l - 2] << endl;
    }

    return 0;
}