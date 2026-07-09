#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        ans[i] = (n + 1) - a[i];
    }
    for(auto i:ans){
        cout << i << " ";
    }
    cout << nl;
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