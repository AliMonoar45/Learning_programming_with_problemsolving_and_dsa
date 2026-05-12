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
        vector<int> a(n);
        long long total = 0;
        int op = 0;
        bool neg = false;
        for (auto &i : a)
        {
            cin >> i;
            total += abs(i);
            if (i < 0 && !neg)
            {
                op++;
                neg = true;
            }
            if (i > 0)
            {
                neg = false;
            }
        }
        cout << total << " " << op << endl;
    }

    return 0;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    long long max_s = 0;
    int cnt = 0;
    bool neg = false;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        max_s += abs(v[i]);
        if (v[i] < 0 && !neg)
        {
            cnt++;
            neg = true;
        }
        if (v[i] > 0)
            neg = false;
    }

    cout << max_s << " " << cnt << endl;
}