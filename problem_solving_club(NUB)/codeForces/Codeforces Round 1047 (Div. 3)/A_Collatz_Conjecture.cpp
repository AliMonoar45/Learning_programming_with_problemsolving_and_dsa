#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve2(){
    int k, x;
    cin >> k >> x;
    cout << (x << k) << nl;
}
void solve()
{
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        if ((x - 1) % 3 == 0 && (x - 1) / 3 % 2 == 1)
        {
            x = (x - 1) / 3;
        }
        else
        {
            x *= 2;
        }
    }

    cout << x << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve2();

    return 0;
}