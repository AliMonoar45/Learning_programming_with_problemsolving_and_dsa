#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t;
        cin >> s >> t;
        int len_s = s.size(),
            len_t = t.size();

        int check = max(len_s, len_t);

        for (int i = 0; i < check; i++)
        {
            if (i<len_s)
            {
                cout << s[i];
            }
            if (i < len_t)
            {
                cout << t[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}