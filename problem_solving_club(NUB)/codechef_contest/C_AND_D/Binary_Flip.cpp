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
        cin >> n;
        string s;
        cin >> s;
        int z = 0, o = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
                z++;
            if (s[i] == '1' && s[i + 1] == '1')
                o++;
        }

        if (o >= z)
            cout << 0 << endl;
        else
        {
            cout << (z - o +1)/2<< endl;
        }
    }

    return 0;
}