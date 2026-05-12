#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    int x, y, z;
    for (int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            int sum = v[i].first + v[l].first + v[r].first;
            if (sum == k)
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second;
                return;
            }

            else if (sum > k)
                r--;
            else
                l++;
        }
    }
    cout << "IMPOSSIBLE";
}
void solve2()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int fix = a[i].first;
        int need = x - a[i].first;

        int l = i + 1, r = n - 1;
        while (l < r)
        {
            int sum = a[l].first + a[r].first;
            if (sum == need)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second;
                return;
            }
            if (sum > need)
                r--;
            else
                l++;
        }
    }
    cout << "IMPOSSIBLE";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
