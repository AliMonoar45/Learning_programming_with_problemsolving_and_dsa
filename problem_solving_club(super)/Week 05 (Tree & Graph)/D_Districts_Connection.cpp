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
    vector<int> a(n+1);
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    bool ok = false;
    for (int i = 1; i <= n; i++)
    {
        if(a[i]!=a[1]){
            ok = true;
            break;
        }
    }
    if(ok){
        int city = -1;
        cout << "YES\n";
        for (int i = 2; i <= n; i++)
        {
            if(a[1]!=a[i]){
                cout << 1 << " " << i << nl;
                city = i;
            }
        }
         
        for (int i = 2; i <= n; i++)
        {
            if(a[1]==a[i]){
                cout << city << " " << i << nl;
            }
        }
        
        
    }else{
        cout << "NO\n";
    }
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}