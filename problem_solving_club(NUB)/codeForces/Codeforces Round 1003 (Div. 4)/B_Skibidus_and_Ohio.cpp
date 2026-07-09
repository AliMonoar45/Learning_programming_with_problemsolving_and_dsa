#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n=s.size();
    for (int i = 0; i < n-1;i++){
        if(s[i]==s[i+1]){
            cout << 1 << nl;
            return;
        }
    }

        cout << s.size() << nl;
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