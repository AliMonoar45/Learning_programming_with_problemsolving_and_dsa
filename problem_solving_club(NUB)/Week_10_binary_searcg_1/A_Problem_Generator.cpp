#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n,m;
    cin >> n>>m;
    string s;
    cin >> s;
    vector<int> freq(7, 0);
    for(char c:s){
        freq[c - 'A']++;
    }
    int cnt = 0;
    for (int i = 0; i < 7; i++)
    {
        if(freq[i]<m){
            cnt += m - freq[i];
        }
    }
    cout << cnt << endl;
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

