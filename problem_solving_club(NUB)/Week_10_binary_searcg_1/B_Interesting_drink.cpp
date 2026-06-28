#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin>>i;

    sort(a.begin(), a.end());

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int m;
        cin >> m;
        int stores = upper_bound(a.begin(), a.end(), m) - a.begin();

        cout << stores << nl;
    }
    
    return 0;
}