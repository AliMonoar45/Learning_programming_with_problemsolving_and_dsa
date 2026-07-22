#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    if (s.size() < 7)
    {
        cout << "NO\n";
        return 0;
    }

    int cnt_1 = 0, cnt_0 = 0;
    int i = 0;
    while (i < s.size())
    {
        if (s[i] == '1')
        {
            cnt_1 = 0; 
            while (i < s.size() && s[i] == '1')
            {
                cnt_1++;
                if (cnt_1 >= 7)
                {
                    cout << "YES\n";
                    return 0;
                }
                i++;
            }
            cnt_0 = 0; 
        }
        else
        {              
            cnt_0 = 0; 
            while (i < s.size() && s[i] == '0')
            {
                cnt_0++;
                if (cnt_0 >= 7)
                {
                    cout << "YES\n";
                    return 0;
                }
                i++;
            }
            cnt_1 = 0; 
        }
    }

    cout << "NO\n";
    return 0;
}
