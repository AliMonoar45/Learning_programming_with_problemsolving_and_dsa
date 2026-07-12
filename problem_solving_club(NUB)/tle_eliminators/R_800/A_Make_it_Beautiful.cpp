#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &&i : a)
    {
        cin >> i;
    }

    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (a[0] != a[i])
            flag = false;
    }
    if(flag){
        cout << "NO\n";
        return;
    }
    sort(a.begin(), a.end());

    swap(a[0],*max_element(a.begin(), a.end()));
    swap(a[1],*min_element(a.begin(), a.end()));
    cout << "YES\n";
    for(auto i:a){
        cout << i << " ";
    }
    cout << nl;
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