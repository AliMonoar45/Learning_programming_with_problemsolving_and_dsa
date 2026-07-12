#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

   
    int size = 2 * n;

    
    for (int i = 0; i < n; i++)
    {
        for (int row = 0; row < 2; row++)
        { 
            for (int j = 0; j < n; j++)
            {
                char ch = ((i + j) % 2 == 0 ? '#' : '.');
                for (int col = 0; col < 2; col++)
                { 
                    cout << ch;
                }
            }
            cout << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
