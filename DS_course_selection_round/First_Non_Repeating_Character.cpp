#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int sz = s.size();
    int fre[26] = {0};
    for (int i = 0; i < sz; i++)
    {
        fre[s[i] - 'a']++;

    }
    for (int i = 0; i < sz; i++)
    {
        if (fre[s[i] - 'a'] == 1)
        {
            cout << s[i]<<endl;
            return 0;
        }
            
    }
    cout << -1 << endl;

    // for (int i = 0; i < 26; i++)
    // {
    //     cout << fre[i] << " ";
    // }
    
    return 0;
}