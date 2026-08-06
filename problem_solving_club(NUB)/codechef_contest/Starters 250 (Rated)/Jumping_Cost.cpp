#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ans = 0,pos=0;
    for (int i = 2; i <= n; i++)
    {
        if(a[i]>0)
            pos += a[i];

        ans = max(ans, (pos + 1 - i));
    }
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}