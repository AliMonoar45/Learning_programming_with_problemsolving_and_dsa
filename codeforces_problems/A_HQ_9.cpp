#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    if (!(cin >> s))
        return 0;
    for (char c : s)
        if (c == 'H' || c == 'Q' || c == '9')
        {
            cout << "YES\n";
            return 0;
        }
    cout << "NO\n";
}
