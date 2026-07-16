#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;
    int GC = __gcd(x, y);

    for (int i = 0; i < n; i++)
    {
        if(abs(a[i]-(i+1))%GC!=0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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