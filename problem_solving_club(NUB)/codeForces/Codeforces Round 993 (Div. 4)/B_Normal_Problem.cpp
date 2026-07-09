#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'p')
            s[i] = 'q';
        else if (s[i] == 'q')
            s[i] = 'p';
    }
    cout << s << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}