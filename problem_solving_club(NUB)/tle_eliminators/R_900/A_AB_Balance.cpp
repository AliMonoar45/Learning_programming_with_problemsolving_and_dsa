#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    if(s[0]==s[n-1]){
        cout << s << nl;
    }else{
        if(s[0]=='a'&&s[n-1]=='b'){
            s[0] = 'b';
            cout << s << nl;
        }
        else if (s[0] == 'b' &&s[n - 1] == 'a')
        {
            s[0] = 'a';
            cout << s << nl;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}