#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
bool is_palindrome(ll n){
    string s = to_string(n);
    string t = s;
    reverse(s.begin(), s.end());
    return s == t;
}
void solve(){
    ll l, r;
    cin >> l >> r;
    ll sum = 0;
    for (int i = l; i <= r;i++){
        if(is_palindrome(i)){
            sum += i;
        }
    }
    cout << sum << nl;
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