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
    ll a, b, c;
    cin >> a >> b >> c;
    bool flag = false;

    ll new_a = (2 * b) - c;
    if (new_a / a > 0 && new_a % a == 0)
        flag = true;

    ll new_b = (a + c) / 2;
    if (new_b / b > 0 && new_b % b == 0 && (c - a) % 2 == 0)
        flag = true;

    ll new_c = 2 * b - a;

    if (new_c / c > 0 && new_c % c == 0)
        flag = true;

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}