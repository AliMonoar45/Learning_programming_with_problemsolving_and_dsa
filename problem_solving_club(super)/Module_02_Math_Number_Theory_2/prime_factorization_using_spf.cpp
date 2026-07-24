#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> cnt;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % 2 == 0)
        {
            cnt[i]++;
            n /= i;
        }
    }
    if (n > 1)
        cnt[n]++;

    for (auto [x, y] : cnt)
    {
        cout << x << " -> " << y << nl;
    }

    return 0;
}