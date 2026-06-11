#include <bits/stdc++.h>
using namespace std;
void solve(){
    // ali monoar
    int n;
    cin >> n;
    long long sum = 0;
    int allOr = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        allOr |= v[i];
    }
    // cout << sum << " " << allOr << endl;
    if(sum==allOr)
        cout << "Yes\n";
        else
            cout << "No\n";
            
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