#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
// ali monoar
void solve3()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << 0 << nl;
        return;
    }
    sort(a.begin(), a.end());
    int cnt = 1;
    set<int> ans;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= k)
        {
            cnt++;
        }
        else
        {
            ans.insert(cnt);
            cnt = 1;
        }
    }
    ans.insert(cnt);
    cout << n - *max_element(ans.begin(), ans.end());

    cout << nl;
}
void solve2()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << 0 << nl;
        return;
    }
    sort(a.begin(), a.end());
    int l = 0, r = 1, ans = 0;
    while (r < n)
    {
        if (a[r] - a[r - 1] > k)
            l = r;

        ans = max(ans, r - l + 1);
        r++;
    }
    cout << n - ans << nl;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int longest = 1, cur = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= k)
        {
            cur++;
        }
        else
        {
            longest = max(longest, cur);
            cur = 1;
        }
    }
    longest = max(longest, cur);

    cout << n - longest << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve3();
    }

    return 0;
}