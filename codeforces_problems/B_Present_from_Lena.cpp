#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#
    int n;
    cin >> n;

    for (int i = 0; i <= 2 * n; i++)
    {
        int level;
        if (i <= n)
            level = i;
        else
            level = 2 * n - i;

        for (int s = 0; s < (n - level) * 2; s++)
        {
            cout << " ";
        }

        for (int j = 0; j <= level; j++)
        {
            if (j > 0)
                cout << " ";
            cout << j;
        }

        for (int j = level - 1; j >= 0; j--)
        {
            cout << " " << j;
        }

        cout << "\n";
    }

    return 0;
}