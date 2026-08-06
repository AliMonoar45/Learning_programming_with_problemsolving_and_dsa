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
    string s;
    cin >> n >> s;

    int unequal = 0;
    int equal = 0;

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - 1 - i])
            equal++;
        else
            unequal++;
    }

    int middle = (n % 2);

    string ans(n + 1, '0');
    for (int j = 0; j <= equal; j++)
    {
        for (int k = 0; k <= middle; k++)
        {
            int ones = unequal + 2 * j + k;
            ans[ones] = '1';
        }
    }

    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}