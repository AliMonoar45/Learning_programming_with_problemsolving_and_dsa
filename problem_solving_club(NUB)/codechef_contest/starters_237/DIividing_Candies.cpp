#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(auto &i: a){
        cin >> i;
    }
    sort(a.begin(), a.end(), greater<int>());

    for(auto i: a){
        if(i%x==0){
            cout << i << endl;
            return;
        }
    }
    cout << 0 << endl;
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