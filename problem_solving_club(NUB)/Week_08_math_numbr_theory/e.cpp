#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0, zer = 0, equal = 0;
    for(auto c:s){
        if(c=='1')
            one++;
            else
                zer++;
        if(one==zer)
            equal++;
    }
    long long ans = 1LL << equal;
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