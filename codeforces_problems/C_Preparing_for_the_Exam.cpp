#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    map<int, int> mp;
    vector<int> q(m + 1), ans(k + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> q[i];
    }
    for (int i = 1; i <= k; i++)
    {
        cin >> ans[i];
        mp[ans[i]] = 1;
    }
    
   
    string a = "";
    for (int i = 1; i <= m; i++)
    {
        
        if(n-1==k-mp[q[i]]){
            a += '1';
        }else{
            a += '0';
        }
    }
    cout << a << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}