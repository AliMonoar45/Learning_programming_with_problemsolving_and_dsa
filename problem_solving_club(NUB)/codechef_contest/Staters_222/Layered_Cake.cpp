#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &i:a)
        cin >> i;
    for(auto &i:b)
        cin >> i;

    int cnt = 0;
    for(auto i:a){
        for(auto j:b){
            if(i>j)
                cnt++;
        }
    }
    cout << cnt << endl;
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