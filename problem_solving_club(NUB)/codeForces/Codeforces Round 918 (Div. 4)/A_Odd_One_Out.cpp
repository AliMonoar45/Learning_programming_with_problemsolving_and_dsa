#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b){
        cout << c << nl;
        
    }else if(a==c){
        cout << b << nl;
    }else if(b==c){
        cout << a << nl;
    }
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