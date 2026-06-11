#include <bits/stdc++.h>
using namespace std;
void solve(){
    // ali
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cin >> a[i];
    }
    int fix = a[1] + a[n];
    for (int i = 1; i <= n/2; i++)
    {
        if(a[i]+a[n-i+1]!=fix){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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