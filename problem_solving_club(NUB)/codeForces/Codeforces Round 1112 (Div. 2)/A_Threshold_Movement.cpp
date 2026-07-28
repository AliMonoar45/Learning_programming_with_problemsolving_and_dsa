#include <bits/stdc++.h>
#define ali   \
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
    for (int i = 1; i <=n; i++)
    {
        cin >> a[i];
    }
    // for (int i = 0; i < n+2; i++)
    // {
    //     cout << a[i] << " ";
    // }
    if(n%2!=0){
        cout << "NO";
    }else{
        int mn_o = INT_MAX,mx_e=INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            if(i%2==0){
                mx_e = max(mx_e, a[i]);
            }
            else
            mn_o = min(mn_o, a[i]);
        }
        // cout << mn_o << " " << mx_e << nl;
        if(mx_e+1<=mn_o-1){
            cout << "YES";
        }else
            cout << "NO";
    }
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ali solve();

    return 0;
}