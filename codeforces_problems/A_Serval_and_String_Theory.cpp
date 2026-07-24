#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool same = true;
    for (int i = 1; i < n; i++)
    {
        if(s[0]!=s[i]){
            same = false;
            break;
        }
    }
    
    if(n==1||same){
        cout << "NO\n";
        return;
    }
    if(k==0){
        string t = s;
        reverse(s.begin(), s.end());
        if(s<=t){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
        return;
    }
    cout << "YES\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}