#include <bits/stdc++.h>
using namespace std;
void output(vector<int> &s){
    int sz=s.size();
    for (int i = 0; i < sz; i++)
    {
        cout << s[i] << " ";
    }
    
}
int main() {
    string s;
    cin >> s;
    vector<int> free(26,0);
    for (int i = 0; i < s.size(); i++)
    {
        free[s[i] - 'a']++;
    }
    for (int i = 0; i < free.size(); i++)
    {
        if (free[i]!=0)
        {
            char ch = i + 'a';
            cout <<ch<<" : "<< free[i] << endl;
        }
        
    }
    
    
    return 0;
}