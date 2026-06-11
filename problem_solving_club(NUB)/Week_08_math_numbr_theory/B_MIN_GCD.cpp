#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i:a)
        cin >> i;
    sort(a.begin(), a.end());
    ll mn = a[0];
    vector<ll> mul;
    for (int i = 1; i < n; i++)
    {
        if(a[i]%mn==0){
            mul.push_back(a[i]);
        }
    }
    ll gc = 0;
    bool flag = false;
    for (int i = 0; i < mul.size(); i++)
    {
        gc = __gcd(gc, mul[i]);
        if(gc==mn){
            flag = true;
            break;
        }
    }
    if(flag)
        cout << "Yes\n";
        else
            cout << "No\n";
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