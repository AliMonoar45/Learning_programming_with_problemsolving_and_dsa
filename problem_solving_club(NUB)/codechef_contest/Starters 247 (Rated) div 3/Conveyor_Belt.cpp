#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // ali monoar
    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;
    int pidx = p - 1;
    int l = 0;
    for (int i = 0; i <= pidx; i++)
    {
        ;
        if (s[i] == 'R')
            l++;
    }
    int r = 0;
    for (int i = pidx; i < n; i++)
    {
        ;
        if (s[i] == 'L')
            r++;
    }
    cout << min(l, r) << endl;
}

int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
