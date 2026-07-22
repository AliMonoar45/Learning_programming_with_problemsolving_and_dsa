#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    // ali monoar;
    int n, k;
    cin >> n >> k;
    string x;
    cin >> x;
    if(2*k>n){
        cout << -1 << nl;
        return;
    }
    // bool ali = true;
    int flpo = 0;
    for (int i = 0; i < k; i++)
    {
        if(x[i]=='L')
            flpo++;
    }
    // cout << flpo << nl;
    
    int j = n - k;
    for (int j = n-k; j < n; j++)
    {
        if(x[j]=='R')
            flpo++;
    }
    cout << flpo << nl;
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