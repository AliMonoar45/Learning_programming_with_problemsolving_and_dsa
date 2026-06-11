#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int t = 0;
    while (n>3)
    {
        n -= 2;
        t++;
    }
    if(n==1||n==3){
        cout << t + 1 << endl;
    }else{
        cout << t + 2 << endl;
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