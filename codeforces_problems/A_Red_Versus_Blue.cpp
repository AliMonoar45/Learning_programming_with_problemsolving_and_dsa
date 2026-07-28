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
    int n, r, b;
    cin >> n >> r >> b;

    int red = r / (b + 1);
    int l_red = r % (b + 1);
    // cout << red << " " << l_red << nl;
    for (int j = 0; j < b + 1; j++)
    {
        for (int i = 0; i < red; i++)
            cout << "R";
        if (l_red > 0)
        {
            cout << "R";
            l_red--;
        }
        if (j < b)
            cout << "B";
    }
    cout << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}