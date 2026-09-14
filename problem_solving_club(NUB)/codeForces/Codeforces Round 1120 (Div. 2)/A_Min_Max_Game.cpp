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
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;

    int cnt_on = count(a.begin(), a.end(), 1);
    // cout << cnt_on << " ";

    int el_trns = (n - 1) / 2;
    
    // cout << el_trns << nl;
    if(cnt_on>el_trns){
        cout << "Bessie";
    }else
        cout << "Elsie";

    cout << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}