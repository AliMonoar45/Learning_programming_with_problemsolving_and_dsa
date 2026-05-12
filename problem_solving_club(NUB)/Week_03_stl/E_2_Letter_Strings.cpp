#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<string> v(n);
    map<string, int> freq;
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]--;
        string a = v[i], b = v[i];
        for (char ch = 'a'; ch <= 'k';ch++){
            a[0] = ch;
            b[1] = ch;
            if (a!=v[i])
            {
                ans += freq[a];
            }
            if (b!=v[i])
            {
                ans += freq[b];
            }
            
            
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