#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<long long int> pre(n + 1);
    pre[1] = a[1];
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    // for (int i = 1; i < n + 1; i++)
    // {
    //     /* code */
    //     cout << pre[i] << " ";
    // }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long int sum;
        if (l == 1)
            sum = pre[r];
        else
            sum = pre[r] - pre[l - 1];

        cout << sum << endl;
    }

    // while (q--)
    // {
    //     long long int sum = 0;
    //     int l, r;
    //     cin >> l >> r;
    //     for (int i = l; i <= r; i++)
    //     {
    //         sum += a[i];
    //     }

    //     cout << sum << endl;
    // }

    return 0;
}