#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0,
        r = 0;
    long long sum = 0, ans = 0;
    while (r < n)
    {
        sum += v[r];

        while (sum > x && l <= r)
        {
            sum -= v[l];
            l++;
        }
        if (sum == x)
        {
            ans++;
        }
        r++;
    }
    cout << ans;
}
void solve2()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    vector<long long> pre(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    int l = 0,
        r = 0;
    long long ans = 0;
    while (r < n)
    {
        long long sum;
        if (l == 0)
            sum = pre[r];
        else
            sum = pre[r] - pre[l - 1];
        if (sum == x)
        {
            ans++;
            l++;
        }
        else if (sum < x)
        {
            r++;
        }

        else
        {
            l++;
        }
    }
    cout << ans;
}
void solve3()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }

    int l = 0, r = 0;
    long long ans = 0;
    while (r < n)
    {
        // first calculatoin ba kaj kora
        long long sum = 0;

        sum = prefix[r + 1] - prefix[l];

        // check condition
        if (sum == k)
        {
            ans++;
            l++;
        }
        else if (sum < k)
        {
            r++;
        }
        else
        {
            l++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve3();

    return 0;
}