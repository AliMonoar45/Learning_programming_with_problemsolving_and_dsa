#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int x = 0;
    for(auto &i:a){
        cin >> i;
        x^= i;
    }
    if (x==0)
    {
        cout << 0 << endl;
        return;
    }
    if(n%2==1)
        cout << x<< endl;
        else
            cout << -1 << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}