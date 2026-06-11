#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> pre(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        pre[i] = pre[i - 1] + v[i - 1];
    }
    long long cnt = 0;
    map<long long, long long> mp;
    mp[0] = 1;
    for (int i = 1; i < n + 1; i++)
    {
        long long y = pre[i] - x;
        cnt += mp[y];
        mp[pre[i]]++;
    }

    cout << cnt;
    return 0;
}