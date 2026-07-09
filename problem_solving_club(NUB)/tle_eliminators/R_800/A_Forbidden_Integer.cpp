#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if ((k == 1 && x == 1))
    {
        cout << "NO\n";
        return;
    }
    vector<int> ans;
    if (x != 1)
    {
        for (int i = 1; i <= n; i++)
        {
            ans.push_back(1);
        }

        cout << "Yes\n";
        cout << ans.size() << nl;

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }
    else
    {

        
        if (k == 1 || (k == 2 && n % 2 == 1))
            cout << "NO" << endl; 
        else
        {
            cout << "YES" << endl; 
            if (n % 2 == 0)
            {
                cout << n / 2 << endl;           
                for (int i = 1; i <= n / 2; i++) 
                    cout << 2 << " ";
                cout << endl;
            }
            else
            {
                cout << (n - 3) / 2 + 1 << endl;      
                for (int i = 1; i <= (n - 3) / 2; i++) 
                    cout << 2 << " ";
                cout << 3 << endl; 
            }
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