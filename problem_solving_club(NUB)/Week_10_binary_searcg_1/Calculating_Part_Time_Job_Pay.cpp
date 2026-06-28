#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (auto &[x, y] : a)
        cin >> x >> y;

    ll sum = 0;
    for (auto [x, y] : a)
    {
        sum += (x * y);
    }
    cout << sum << nl;

    return 0;
}