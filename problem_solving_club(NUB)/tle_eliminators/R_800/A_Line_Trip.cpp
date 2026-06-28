#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve2()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cur_p = 0;
    int max_dif = 0;
    for (int i = 0; i < n; i++)
    {
        int dif = a[i] - cur_p;
        max_dif = max(max_dif, dif);
        cur_p = a[i];
    }

    max_dif = max(max_dif, 2 * (k - cur_p));

    cout << max_dif << "\n";
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cur_p = 0;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        int dif = a[i] - cur_p;
        pq.push(dif);
        cur_p = a[i];
    }

    pq.push(2 * (k - cur_p));

    int ans = pq.top();

    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve2();
    }

    return 0;
}