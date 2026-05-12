#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        prefix[i] = prefix[i - 1] + v[i];
    }

    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int old_sum = prefix[n];
        int sum_of_l_r = prefix[r] - prefix[l - 1];
        int new_sum_of_l_r = k * (r - l + 1);

        int new_sum = old_sum - sum_of_l_r + new_sum_of_l_r;

        if (new_sum % 2 != 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n + 1), prefix(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int sum_of_l_r = prefix[r] - prefix[l - 1];
            int new_sum_of_portion = k * (r - l + 1);
            int new_sum = prefix[n] - (sum_of_l_r + new_sum_of_portion);
            if (new_sum % 2 == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}