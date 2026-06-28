#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    string s, k;
    cin >> s >> k;

    for (int i = 0; i+m <=n ; i++)
    {
        /* code */
        int mv = 0;
        for (int j = 0; j < m; j++)
        {
            int a = s[i + j] - '0';
            int b = k[j] - '0';
            int dif = abs(a - b);
            
        }
        
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