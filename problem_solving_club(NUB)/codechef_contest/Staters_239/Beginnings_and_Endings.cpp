#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;
    if(a[0]==a[n-1]){
        cout << 0 << endl;
        return;
    }
    int move = INT_MAX;
   
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = i+1; j < n; j++)
        {
            if(a[i]==a[j]){
                move = min(move, i + (n - 1 - j));
            }
        }
        
    }
    if (move == INT_MAX)
        cout << -1 << endl;
    else
        cout << move << endl;
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