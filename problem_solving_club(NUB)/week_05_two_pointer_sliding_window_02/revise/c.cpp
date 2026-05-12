#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long s = a + b + c;
    if (s % 2 != 0)
    {

        cout << "NO\n";
        return;
    }
    int h = s / 2;
    if(a==h||b==h||c==h){
        cout << "Yes\n";
        return;
    }
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