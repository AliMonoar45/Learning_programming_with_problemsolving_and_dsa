#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;

    long long ans = 0;
    int z = 0;
    while (z<n&&a[z]==0)
    {
        z++;
    }
    
    for (int i = z; i < n-1; i++)
    {
        ans+=a[i];
        if(a[i]==0)
            ans++;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
    

    return 0;
}