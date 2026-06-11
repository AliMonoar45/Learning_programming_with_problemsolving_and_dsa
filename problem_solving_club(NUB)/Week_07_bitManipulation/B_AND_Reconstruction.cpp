#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> b(n-1);
    for (int i = 0; i < n-1; i++)
    {
        cin >> b[i];
    }
    vector<int> a(n);
    a[0] = b[0];
    for (int i = 1; i < n-1; i++)
    {
        a[i] = b[i-1] | b[i ];
    }
    a[n-1] = b[n - 2];

   for (int i = 0; i < n-1; i++) {
        if ((a[i] & a[i+1]) != b[i]) {
            cout << -1 << "\n";
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}