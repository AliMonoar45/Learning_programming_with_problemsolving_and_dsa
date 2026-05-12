#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    // check every x from 1 to a
    int ans = 0;
    for (int i = 1; i <= a; i++)
    {
        if (2 * i <= b)
            ans = 3 * i;
    }
    cout << ans << endl;
}
void solve2(){
    int a, b;
    cin >> a >> b;
    cout << min(a, b / 2) * 3 << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve2();
    }
    return 0;
}