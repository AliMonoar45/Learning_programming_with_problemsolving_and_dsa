#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        vector<int> f(3, 0);
        f[s[i] - 'a']++;
        for (int j = i+1; j < min(n,i+7); j++)
        {
            f[s[j] - 'a']++;
            if(f[0]>f[1]&&f[0]>f[2]){
                ans = min(ans, (j - i + 1));
            }

        }
        
    }
    if(ans==INT_MAX)
        cout << -1 << endl;
        else
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