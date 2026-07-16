#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    // ali monoar
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll sunno = 0, ek = 0;
    for(auto i:s){
        if(i=='0')
            sunno++;
        else
            ek++;

    }
    if(sunno<k){
        cout << s << nl;
        return;
    }
    if(ek<k){
        cout << s << nl;
        return;
    }
    if(n==2*k){
        string che = s;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0')
                s[i] = '1';
            else
                s[i] = '0';
        }

        string ans = min(s, che);
        cout << ans << nl;
        return;
    }
    sort(s.begin(), s.end());
    cout << s << nl;
    // ali monoar
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