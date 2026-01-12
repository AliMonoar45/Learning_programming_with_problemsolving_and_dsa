#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (auto &c : s)
        c = tolower(c);

    for (auto c : s)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
        }
        else
            cout << "." << c;
    }
    // cout << s;
    return 0;
}