#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int cnt = 0;
    for(auto c:s){
        if(c=='x'){
            cnt++;
            if(cnt>2){
                ans++;
            }
        }else{
            cnt = 0;
        }
    }
    cout << ans;
    return 0;
}