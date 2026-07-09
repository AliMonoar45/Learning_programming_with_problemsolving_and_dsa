#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
const ll mod = 998244353;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        a[i] = i + 1;
    }
    a[k - 1] = a[n + 1];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    
    return 0;
}