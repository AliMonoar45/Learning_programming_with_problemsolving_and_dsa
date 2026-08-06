#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> pl(m + 2);
    for (int i = 1; i <= m+1; i++)
    {
        cin >> pl[i];
    }
    vector<int> dif(m + 1);
    for (int i = 1; i <= m; i++)
    {
        dif[i] = (pl[i] ^ pl[m + 1]);
    }

    int cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        int d = __builtin_popcount(dif[i]);
        if(d<=k)
            cnt++;
    }

    cout << cnt << nl;

    return 0;
}