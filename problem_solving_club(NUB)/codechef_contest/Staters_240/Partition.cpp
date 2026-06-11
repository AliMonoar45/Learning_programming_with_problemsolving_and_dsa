#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    // ali monoar
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i :a){
        cin >> i;
    }

    map<ll, ll> freq;
    ll mx_f = 0;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
        if (freq[a[i]] > mx_f)
            mx_f = freq[a[i]];
    }
    cout << (n - mx_f + 1) << endl;
}
int main()
{
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