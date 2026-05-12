#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long x, y;
        cin >> x >> y;
        long long l = (x * x * x * x) + 4 * y * y;
        long long r = 4 * x * x * y;
        if (l == r)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
    }
    
    return 0;
}