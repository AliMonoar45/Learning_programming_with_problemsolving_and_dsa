#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (auto &i : a)
    {

        cin >> i;
        sum += i;
    }

    if ((n - sum) % 2 != 0)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }
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