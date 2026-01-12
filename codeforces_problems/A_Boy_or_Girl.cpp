#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> a(26);
    for (int i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    int sz = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i]>0)
        {
            sz++;
        }
        
    }
    
    if (sz%2==0)
    {
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    
    return 0;
}