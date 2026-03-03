#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> dice = {1, 2, 3, 4, 5, 6};
        vector<vector<int>> v(n, dice);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                cout << v[i][j] << " ";
            }

            cout << endl;
        }

        cout << endl;
    }
}
