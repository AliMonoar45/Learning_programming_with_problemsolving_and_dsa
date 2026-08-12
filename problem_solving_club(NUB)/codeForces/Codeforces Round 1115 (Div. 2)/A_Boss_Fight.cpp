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
    if(n==1){
        cout << a[0] << nl;
        return;
    }
    bool sild = false;
    int dmg = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (!sild && (a[i] != a[i + 1])) {
                dmg += a[i];
            }else if (a[i]==a[i+1])
            {
                dmg += a[i] * 2;
                sild = true;
                break;
            }
            
    }
    cout << dmg << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}