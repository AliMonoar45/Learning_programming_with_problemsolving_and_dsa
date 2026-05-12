#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (n>1)
    {
        vector<long long> b(n - 1);
        for (int i = 0; i < n-1; i++)
        {
            b[i] = a[i] ^ a[i + 1];
        }
        a = b;
        n--;
    }
    cout << a[0] << endl;
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