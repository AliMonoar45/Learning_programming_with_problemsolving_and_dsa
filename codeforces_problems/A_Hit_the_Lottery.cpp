#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve()
{

    ll n;
    cin >> n;
    vector<ll> bil = {100, 20, 10, 5, 1};
    ll cnt = 0;
    for (auto it : bil)
    {
        cnt += (n / it);
        n = n % it;
    }
    cout << cnt << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}