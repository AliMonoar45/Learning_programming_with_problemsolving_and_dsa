#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;

    int swp = 0;
    bool pos = true;
    for(char c:s){
        if(c=='1'){
            swp = x;
        }else{
            if(swp>0){
                swp--;
            }else{
                pos = false;
                break;
            }
        }
    }
    if(pos)
        cout << "YES\n";
        else
            cout << "NO\n";
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