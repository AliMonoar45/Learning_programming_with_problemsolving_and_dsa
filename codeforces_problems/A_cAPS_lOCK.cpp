#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool allUpper = true;
    for (char c : s)
    {
        if (!isupper(c))
        {
            allUpper = false;
            break;
        }
    }
    bool exceptFirstUpper = true;
    for (int i = 1; i < s.size(); i++)
    {
        if (!isupper(s[i]))
        {
            exceptFirstUpper = false;
            break;
        }
    }
    if (allUpper || exceptFirstUpper)
    {
        for (char &c : s)
        {
            if (isupper(c))
                c = tolower(c);
            else
                c = toupper(c);
        }
    }
    cout << s;
    return 0;
}