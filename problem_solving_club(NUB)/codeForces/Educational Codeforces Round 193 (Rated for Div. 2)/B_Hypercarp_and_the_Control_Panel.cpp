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
    
    map<int, int> freq;
    vector<int> a(n);
    for(auto &i:a){
        cin >> i;
        freq[i]++;
    }
    if(n==1){
         cout << 1 << nl;
         return;
     } 
    if(freq.size()==1){
        cout << 1 << nl;
        return;
    }
    int sum = 0;
    for(auto [x,y]:freq){
        sum+=y ;

    }
    cout <<sum<< "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}