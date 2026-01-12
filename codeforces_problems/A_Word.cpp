#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    int small = 0, big = 0;
    for (int i = 0; i < sz; i++)
    {
        if (isupper(s[i]))
        {
            big++;
        }
        else
        {
            small++;
        }
    }
    if (big>small)
    {
        for(char ch:s)
            cout << (char)toupper(ch);
    }else{
        for (char ch : s)
            cout << (char)tolower(ch);
    }
    

    return 0;
}