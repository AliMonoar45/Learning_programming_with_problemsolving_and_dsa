#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, x;
        cin >> s >> x;
        int len_s = s.size(),
            len_x = x.size();
        for (int i = 0; i+len_x <= len_s; i++)
        {
            bool match = true;
            for (int j = 0; j < len_x; j++)
            {
                if(s[i+j]!=x[j]){
                    match = false;
                    break;
                }
            }
           if (match)
           {
               s.replace(i, len_x, "#");
           }
           
        }
        cout << s << endl;
    }
    return 0;
}