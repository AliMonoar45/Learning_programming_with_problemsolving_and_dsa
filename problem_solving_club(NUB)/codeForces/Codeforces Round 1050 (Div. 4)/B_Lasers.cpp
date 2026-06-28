#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void inp_vec(vector<int> &v,int len){
    for(auto &i:v)
        cin >> i;
}
void out_vec(vector<int> &v, int len)
{
    for (auto &i : v)
        cout<< i<<" ";

    cout << nl;
}
void solve()
{
    int n, m,x, y;
    cin >> n >> m >> x >> y;
    vector<int> a(n),b(m);
    inp_vec(a, n);
    inp_vec(b, m);
    int cnt = 0;
    for (auto i:a){
        if(i<=x)
            cnt++;
    }
    for(auto i:b){
        if(i<=y)
            cnt++;
    }
    cout << n+m << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}