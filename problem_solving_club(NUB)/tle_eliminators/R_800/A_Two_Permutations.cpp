#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n,a,b;
    cin >> n>>a>>b;

    if(a+b+2<=n||(a==b&&b==n)){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    

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