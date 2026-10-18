#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    if ((n & (n - 1)) == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
}
int main()
{

  

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
