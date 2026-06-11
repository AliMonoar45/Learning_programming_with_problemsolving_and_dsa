#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll l,r;
    cin >> l >> r;
    if((r-l+1)%2==0){

        cout << "YES\n";
        for (ll i = l; i <= r; i += 2)
        {
            cout << i << " " << i + 1 << endl;
        }
    }
    
    
    return 0;
}