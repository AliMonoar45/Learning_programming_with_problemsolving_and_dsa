#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    int z = 0;
    vector<int> a(n);
    for(auto &i:a){
        cin >> i;
        if(i==0)
            z++;
    }
    if(z<2){
        cout << -1 << nl;
        return;
    }
    if(a[0]==0&&a[n-1]==0){
        cout << 0 << nl;
        return;
    }
    if((a[0]==0||a[n-1]==0)){
        cout << 1 << nl;
        return;
    }
   
        cout << 2 << nl;
        
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}