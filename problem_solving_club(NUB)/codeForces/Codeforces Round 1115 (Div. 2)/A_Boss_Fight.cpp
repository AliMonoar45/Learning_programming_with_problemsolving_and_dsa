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
    map<int, int> mp;
    int max_val = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if(mp[a[i]]>cnt){
            max_val = a[i];
            cnt = mp[a[i]];
        }
    }
    if(n==1){
        cout << a[0] << nl;
        return;
    }

    int rem = n - cnt;
    if(rem>=cnt){
        int ans = accumulate(a.begin(), a.end(), 0);
        cout << ans << nl;
    }else{
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]!=max_val)
                ans += a[i];
        }
        int x = min(cnt, rem + 2);
        ans += max_val * x;
        cout << ans << nl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}