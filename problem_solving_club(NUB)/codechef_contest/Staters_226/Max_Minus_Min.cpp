#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long mx = *max_element(a.begin(), a.end());
    long long lim = mx;
    long long ans = mx - *min_element(a.begin(), a.end());

    
    priority_queue<long long, vector<long long>, greater<long long>> pq(a.begin(), a.end());

    while (pq.top() <= lim)
    {
        ans = min(ans, mx - pq.top());
        mx = max(mx, 2 * pq.top());
        pq.push(2 * pq.top());
        pq.pop();
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
