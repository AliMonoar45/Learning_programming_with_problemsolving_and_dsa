#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            cout << a[i];
        }else{
            break;
        }
        i++;
        j++;
    }
    cout << endl;
}
int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
