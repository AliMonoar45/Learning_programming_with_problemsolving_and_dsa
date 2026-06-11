#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    if(n==2){
        cout << 0 << endl;
        return;
    }

    cout << endl;
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