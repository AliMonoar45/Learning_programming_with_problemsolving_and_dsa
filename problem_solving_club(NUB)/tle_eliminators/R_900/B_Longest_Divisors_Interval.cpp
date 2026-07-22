#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    int ans = 1;
    for (int i = 1; 1; i++)
    {
        if (n % i == 0)
            ans = i;
        else
            break;
    }
    cout << ans << "\n";
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
