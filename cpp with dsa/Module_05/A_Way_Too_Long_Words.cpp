#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        int sz = str.size();
        if (sz <= 10)
        {
            cout << str;
        }
        else
        {
            cout << str[0] << sz - 2 << str.back();
        }
        cout << endl;
    }

    return 0;
}