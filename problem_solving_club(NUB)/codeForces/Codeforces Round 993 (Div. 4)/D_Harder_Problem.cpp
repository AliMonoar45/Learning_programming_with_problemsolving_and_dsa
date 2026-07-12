#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve2(){
    ll n, m;
    cin >> n;

    vector<ll> vv(n + 1, false);

    int j = 1;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (vv[x])
        {
            while (vv[j])
            {
                j++;
            }
            cout << j << " ";
            vv[j] = true;
        }
        else
        {
            cout << x << " ";
            vv[x] = true;
        }
    }

    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (!a[x])
        {
            b[i] = x;
            a[x] = 1;
        }
    }
    queue<int> q;
    for (int i = 1; i <= n; i++)
        if (!a[i])
            q.push(i);
    for (int i = 0; i < n; i++)
    {
        if (!b[i])
        {
            b[i] = q.front();
            q.pop();
        }
    }
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    cout << endl;
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