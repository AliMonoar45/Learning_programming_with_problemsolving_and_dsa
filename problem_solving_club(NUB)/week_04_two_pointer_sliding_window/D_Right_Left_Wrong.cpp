#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve_01(){
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum =0, ans = 0;

    for(auto &i:a)
        cin >> i,sum+=i;
    string s;
    cin >> s;
    int l = 0, r = n - 1;
    while (l<r)
    {
        if(s[l]=='L'&&s[r]=='R'){
            ans += sum;
            sum -= a[l] + a[r];
            l++;
            r--;
        }else if (s[l]!='L')
        {
            sum -= a[l];
            l++;
        }else if (s[r]!='R')
        {
            sum -= a[r];
            r--;
        }
        
        
    }
    cout << ans << nl;
}

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n + 1), prefix(n + 1,0);
    // input nilam and prefix sum calculate korlam
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }
    string s;
    cin >> s;
    ll sum = 0;
    // using two pointer
    // aikhane 0 based nilam karon n ar value te sum korte gele general case ta jate miss match na hoi

    int l = 0, r = n - 1;
    while (l<r)
    {
        while (l < r&&s[l] != 'L')
        {
            l++;
        }
        while (l < r&&s[r] != 'R')
        {
            r--;
        }
        if(l<r){
            sum += prefix[r + 1] -  prefix[l];
        }

        l++, r--;
    }
    cout << sum << nl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
        solve();
    return 0;
}