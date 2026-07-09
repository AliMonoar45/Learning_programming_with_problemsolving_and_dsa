#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
bool intersect(int a, int b, int x)
{
    if (a < b)
        return (x > a && x < b);
    return (x > a || x < b);
}
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool c1 = intersect(a, b, c);
    bool d1 = intersect(a, b, d);

    if(c1!=d1)
        cout << "YES\n";
        else
            cout << "NO\n";
}
int main()
{
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