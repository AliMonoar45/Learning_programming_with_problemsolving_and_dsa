#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{  //ali monoar
    int n, x;
    cin >> n >> x;
    if (x == 0)
    {
        for (int i = 0; i < n * 3; i++)
        {
            cout << 0;
        }
        cout << nl;
        return;
    }
    int z = 3 * n - x;
    

    for (int i = 0; i < z;i++){
        cout << 0;
    }
    for (int i = x; i > 0;i--){
        cout << 1;
    }

        cout << nl;
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