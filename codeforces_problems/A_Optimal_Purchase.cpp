#include <bits/stdc++.h>
#define ali   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

void solve(){
    ll n, a, b;
    cin >> n >> a >> b;

    if (3 * a <= b)
    {
        cout << n * a << "\n";
    }
    else
    {
        ll groups = n / 3;
        ll rem = n % 3;
        cout << groups * b + min(rem * a, b) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ali solve();


    return 0;
}