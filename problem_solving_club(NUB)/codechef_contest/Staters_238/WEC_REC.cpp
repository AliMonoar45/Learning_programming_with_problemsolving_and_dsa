#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, k;
    cin >> n >> x >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<int,int> freq;
    for (int i = 0; i < n; i++) freq[a[i]]++;

    vector<pair<int,int>> c;
    for (auto it : freq) c.push_back({it.first, it.second});

    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());

    int ans = 0;
    for (int i = 0; i < c.size() && i < k; i++) {
        ans += c[i].second;
    }

    if (ans > x) ans = x;
    cout << ans << endl;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
