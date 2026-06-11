#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
    {
     
        cin >> a[i];
    }
    cout << *max_element(a.begin(), a.end()) << endl;
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