#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != (i % 2))
        {
            pos++;
        }
    }
    int anss = min(pos, n - pos);
    cout << anss << endl;
}
int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
