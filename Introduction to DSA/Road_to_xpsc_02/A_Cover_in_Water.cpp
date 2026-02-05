#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (i + 2 < n&&s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                flag = true;
                break;
            }
            if (s[i]=='.')
            {
                count++;
            }
            
        }
        if(flag)
            cout << 2;
        else
            cout << count;

        cout << endl;
    }
    
    return 0;
}