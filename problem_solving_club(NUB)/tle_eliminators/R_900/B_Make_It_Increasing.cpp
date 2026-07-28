#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    for (int i = n-2; i>=0; i--)
    {
       while (a[i]>=a[i+1])
       {
           ans++;
           a[i] /= 2;
           if(a[i]==0) break;
       }
       if (a[i] == 0 && a[i + 1] == 0){
           ans = -1;
           break;
       }
    }
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}