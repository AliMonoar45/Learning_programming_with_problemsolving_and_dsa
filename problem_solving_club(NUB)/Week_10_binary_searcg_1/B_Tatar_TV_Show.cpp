#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    // ali monoar
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n-k; i++)
    {
        if(s[i]=='1'){
            s[i] = '0';
            if(s[i+k]=='0'){
                s[i + k] = '1';
            }else{
                s[i + k] = '0';
            }
        }
    }
    bool flag = true;
    for (int i = n-k; i < n; i++)
    {
        /* code */
        if(s[i]=='1'){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else
        cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
        solve();
    return 0;
}