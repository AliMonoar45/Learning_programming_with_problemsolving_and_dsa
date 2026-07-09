#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> b(n);
    for(auto &i:b)
        cin >> i;
    vector<int> a;
    a.push_back(b[0]);
    for (int i = 1; i < n; i++)
    {
        if(b[i]>=b[i-1]){
            a.push_back(b[i]);
        }else{
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout << a.size() << nl;
    for(auto &i:a)
        cout << i << " ";
    cout << nl;
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