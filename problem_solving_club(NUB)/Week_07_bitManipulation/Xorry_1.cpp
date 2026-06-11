#include <bits/stdc++.h>

using namespace std;
void solve_tle()
{
    int x;
    cin >> x;
    pair<int, int> mn;
    int diff = INT_MAX;
    for (int i = 0; i <= x; i++)
    {
        int a = i, b;
        b = x ^ a;
        if (b >= a && (b - a) < diff)
        {
            diff = min(diff, b - a);
            mn.first = a;
            mn.second = b;
        }
    }
    cout << mn.first << " " << mn.second << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve_tle();
    }

    return 0;
}