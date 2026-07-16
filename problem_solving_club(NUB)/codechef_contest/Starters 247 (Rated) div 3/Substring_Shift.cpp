#include <bits/stdc++.h>
using namespace std;
void solve()
{
    // ali monoar

    int n;
    cin >> n;
    string s;
    cin >> s;
    int pt_z = 0;
    while (pt_z < n && s[pt_z] != 'z')
        pt_z++;
    for (int i = pt_z; i < n; i++)
    {
        if (s[i] == 'z')
            s[i] = 'a';
        else
            break;
    }
    cout << s << endl;
}
int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
