#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        string s;
        cin >> n >> s;

        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
