#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    // ali monoar
    int n;
    cin >> n;
    vector<ll> a(n); 

    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0; 
    bool f = true;

    
    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        ll xv = i + 1;
        ll lagbe = (xv * (xv + 1)) / 2;

        if (sum < lagbe)
        {
            f = false;
            break; 
        }
    }

    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";
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