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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = INT_MAX;
    for (int i = 0; i < n/2; i++)
    {
        int n1 = min(a[i], a[n - 1 - i]);
        int n2 = max(a[i], a[n - 1 - i]);

        int par = n2 - n1;

        if(par==0) continue;

        if(par!=2){
            cout << "No\n";
            return;
        }
        l = max(l, n1);
        r = min(r, n1 + 1);
    }
    if(l<=r){
        cout << "Yes\n";
    }else
        cout << "No\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}