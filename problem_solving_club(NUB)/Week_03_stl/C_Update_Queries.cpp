#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> a(m);
    for (auto &i:a)
        cin >> i;
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
    string c;
    cin >> c;
    sort(c.begin(), c.end());
    
    for (int i = 0; i < a.size(); i++)
    {
        int pos = a[i] - 1;
        s[pos] = c[i];
    }
    cout << s << nl;
}
int main() {
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