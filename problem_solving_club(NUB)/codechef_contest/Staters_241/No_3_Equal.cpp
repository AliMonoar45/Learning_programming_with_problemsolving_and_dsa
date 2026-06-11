#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 2; i < n; i++)
    {
        if(s[i]==s[i-1]&&s[i]==s[i-2]){
            ans++;
            s[i] = ' ';
        }
    }
    cout << ans << endl;
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