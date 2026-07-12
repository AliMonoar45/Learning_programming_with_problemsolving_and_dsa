#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> v[i];

    int totalTwos = 0;
    for (int i = 1; i <= n; ++i)
        if (v[i] == 2)
            ++totalTwos;

    if (totalTwos % 2 == 1)
    {
        cout << -1 << '\n';
        return;
    }
    int half = totalTwos / 2;
    int prefix = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (v[i] == 2)
            ++prefix;
        if (prefix == half)
        {
            cout << i << '\n';
            return;
        }
    }
    cout << 1 << nl;
}
void solve2(){
    int n;
    cin >> n;
    vector<int> a(n);
    int total_two = 0;
    for(auto &i:a){
        cin >> i;
        if(i==2)
            total_two++;
    }
    if(total_two%2!=0){
        cout << -1<<nl;
        return;
    }
    ll ans = -1;
    int current_two = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==2)
            current_two++;
        if(current_two==total_two-current_two){
            ans = i + 1;
            break;
        }
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
        solve2();
    return 0;
}