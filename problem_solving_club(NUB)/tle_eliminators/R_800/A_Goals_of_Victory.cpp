#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    int sum = 0;
    vector<int> a(n-1);
    for(auto &i:a){
        cin >> i;
        sum += i;
    }
    
       sum= -1 * sum;
    cout << sum << nl;
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