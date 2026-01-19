#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int free[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char ch = tolower(s[i]);
        free[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (free[i] == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}