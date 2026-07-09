#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;

    vector<int> start_c, end_c;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==a[0])
            start_c.push_back(i);

    }
    for (int i = n - 1; i >= 0;i--) {
        if(a[n-1]==a[i])
            end_c.push_back(i);
    }

    if(start_c.size()>=k&&end_c.size()>=k){
        if(a[0]==a[n-1]){
            cout << "YES\n";
                }else if (start_c[k-1]<end_c[k-1])
        {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        
    }else{
        cout << "NO\n";
    }
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