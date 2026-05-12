#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int sq = c * c;
    int rq = a * b;
    if(sq>=rq){
        cout << 0 << endl;
        return;
    }
    if(sq>=a||sq>=b){
        cout << 1 << endl;
        return;
    }
    else
        cout << 2 << endl;
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