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
    int od = 0;
    vector<int> a(n);
    for(auto &i:a){
        cin >> i;
        if(i%2!=0){
            od++;
        }
    }
    // cout << od << nl;
    int tot = accumulate(a.begin(), a.end(), 0);
    // cout << tot << nl;
    if(tot%2==0){
        // cout << tot - od << nl;
        
        cout << tot - (od / 2) << nl;
    }else{
        cout << od / 2 << nl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}