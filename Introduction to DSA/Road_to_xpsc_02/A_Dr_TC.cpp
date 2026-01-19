#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (char c : s)
            if (c == '1')
                count++;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one += count - 1;
            }
            else
            {
                one += count + 1;
            }
        }
        cout << one << endl;
    }

    return 0;
}