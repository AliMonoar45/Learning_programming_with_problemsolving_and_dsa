#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int free[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        free[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(free[i]>0){
            char ch = i + 'a';
            cout << ch << " : " << free[i] << endl;
        }
    }

    return 0;
}