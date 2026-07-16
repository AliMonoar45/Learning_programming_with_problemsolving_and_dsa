#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int longest =1,current=1;
    for (int i = 1; i < n; i++)
    {
        if(s[i-1]==s[i])
            current++;
        else{
            longest = max(longest, current);
            current = 1;
        }
        
    }
    longest = max(longest, current);
    cout << longest + 1 << nl;
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