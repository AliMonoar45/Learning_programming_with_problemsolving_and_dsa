#include <bits/stdc++.h>;
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] == b[i])
                cnt++;
        }
    }
    cout << cnt << " ";
}
void solve_2()
{
    long long n, m;
    cin >> n >> m;
    map<long long, long long> mp;
    map<long long, long long> mp2;
    for (int i = 0; i < n; i++)
    {
        long long c;
        cin >> c;
        mp[c]++;
    }
    for (long long i = 0; i < m; i++)
    {
        long long c;
        cin >> c;
        mp2[c]++;
    }
    long long cnt = 0;
    for (auto [x, y] : mp)
    {
        auto it = mp2.find(x);

        if (it != mp2.end())
        {
            cnt += y * it->second;
        }
    }
    cout << cnt << " ";
}
void solve_3()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        int curr = a[l], cnt1 = 0, cnt2 = 0;
        while (l < n && a[l] == curr)
        {
            cnt1++, l++;
        }
        while (r < m && curr > b[r])
        {
            r++;
        }

        while (r < m && b[r] == curr)
        {
            cnt2++, r++;
        }
        ans += 1LL * cnt1 * cnt2;
    }
    cout << ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
        cin >> b[i];
    long long ans = 0;
    int l = 0, r = 0;
    while (r < m&&l<n)
    {
        int curr = a[l], cnt1 = 0, cnt2 = 0;
        while (l<n&&a[l] == curr)
        {
            cnt1++;
            l++;
        }
        while (b[r] < curr)
        {
            r++;
        }

        while (r<m&&b[r] == curr)
        {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans;
    return 0;
}