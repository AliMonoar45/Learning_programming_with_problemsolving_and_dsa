#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
vector<int> allPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j < 11;j++)
        {
            if(a[i]%allPrimes[j]==0){
                mp[allPrimes[j]].push_back(i);
                break;
            }
        }
        
    }
    vector<int> ans(n);
    int clr = 1;
    for(auto [x,y]:mp){
        for(auto pos:y){
            ans[pos] = clr;
        }
        clr++;
    }
    cout << mp.size() << nl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i]<<" ";
    }
    
    // for(auto [x,y]:mp){
    //     cout << x << " -> ";
    //     for(auto val:y){
    //         cout << val << " ";
    //     }
    //     cout << nl;
    // }
    cout << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}