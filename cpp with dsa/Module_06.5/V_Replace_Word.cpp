#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]=='E'&&str[i+1]=='G'&&str[i+2]=='Y'&&str[i+3]=='P'&&str[i+4]=='T')
        {
            str.erase(i, 4);
            str[i] = ' ';
        }
    }
    cout << str;
    
    
    return 0;
}